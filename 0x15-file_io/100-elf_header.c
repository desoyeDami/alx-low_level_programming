#include "main.h"

/**
 * printElfAbiVersion - Print ELF ABI version.
 * @buffer: The ELF header
 */
void printElfAbiVersion(const unsigned char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}

/**
 * printElfType - Print ELF type.
 * @buffer: The ELF header
 * @bigEndian: Endianness (big endian if non-zero)
 */
void printElfType(const unsigned char *buffer, int bigEndian)
{
	char *typeTable[5] = {
			"NONE (No file type)",
			"REL (Relocatable file)",
			"EXEC (Executable file)",
			"DYN (Shared object file)",
			"CORE (Core file)"
	};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (bigEndian)
		type = 0x100 * buffer[16] + buffer[17];
	else
		type = 0x100 * buffer[17] + buffer[16];

	if (type < 5)
		printf("%s\n", typeTable[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * printElfEntryPoint - Print entry point address.
 * @buffer: String containing the entry point address
 * @bitMode: Bit mode (32 or 64)
 * @bigEndian: Endianness (big endian if non-zero)
 */
void printElfEntryPoint(const unsigned char *buffer,
						size_t bitMode, int bigEndian)
{
	int addressSize = bitMode / 8;

	printf("  %-34s 0x", "Entry point address:");

	if (bigEndian)
	{
		while (addressSize && !*(buffer))
			--addressSize, ++buffer;

		printf("%x", *buffer & 0xff);

		while (--addressSize > 0)
			printf("%02x", *(++buffer) & 0xff);
	}
	else
	{
		buffer += addressSize;

		while (addressSize && !*(--buffer))
			--addressSize;

		printf("%x", *buffer & 0xff);

		while (--addressSize > 0)
			printf("%02x", *(--buffer) & 0xff);
	}

	printf("\n");
}

/**
 * main - Display ELF header information.
 * @argc: Argument count
 * @argv: Argument values
 *
 * Return: Always 0
 */
int main(int argc, const char *argv[])
{
	unsigned char buffer[18];
	unsigned int bitMode;
	int bigEndian;
	int fileDescriptor;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fileDescriptor = open(argv[1], O_RDONLY);
	if (fileDescriptor == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	elfRead(fileDescriptor, (char *)buffer, 18);

	printElfMagic(buffer);
	bitMode = printElfClass(buffer);
	bigEndian = printElfData(buffer);
	printElfVersion(buffer);
	printElfOsAbi(buffer);
	printElfAbiVersion(buffer);
	printElfType(buffer, bigEndian);

	lseek(fileDescriptor, 24, SEEK_SET);
	elfRead(fileDescriptor, (char *)buffer, bitMode / 8);

	printElfEntryPoint(buffer, bitMode, bigEndian);

	elfClose(fileDescriptor);

	return (0);
}
