#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * elfCompareStrings - Compare two strings up to n bytes.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to compare
 *
 * Return: 0 if the first n bytes of s1 and s2 are equal, otherwise non-zero
 */
int elfCompareStrings(const char *s1, const char *s2, size_t n)
{
	for (; n && *s1 && *s2; --n, ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (n)
	{
		if (*s1)
			return (1);
		if (*s2)
			return (-1);
	}
	return (0);
}

/**
 * elfClose - Close a file descriptor and print an error message upon failure.
 * @fd: The file descriptor to close
 */
void elfClose(int fd)
{
	if (close(fd) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close file descriptor\n", 33);
	exit(98);
}

/**
 * elfRead - Read from a file and print an error message upon failure.
 * @fd: The file descriptor to read from
 * @buf: The buffer to write to
 * @count: The number of bytes to read
 */
void elfRead(int fd, char *buf, size_t count)
{
	if (read(fd, buf, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	elfClose(fd);
	exit(98);
}

/**
 * printElfMagic - Print ELF magic.
 * @buffer: The ELF header
 */
void printElfMagic(const unsigned char *buffer)
{
	unsigned int i;

	if (elfCompareStrings((const char *)buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}

/**
 * printElfClass - Print ELF class.
 * @buffer: The ELF header
 *
 * Return: Bit mode (32 or 64)
 */
size_t printElfClass(const unsigned char *buffer)
{
	printf("  %-34s ", "Class:");

	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return 64;
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return 32;
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return 32;
}

/**
 * printElfData - Print ELF data.
 * @buffer: The ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */
int printElfData(const unsigned char *buffer)
{
	printf("  %-34s ", "Data:");

	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return 1;
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return 0;
	}
	printf("Invalid data encoding\n");
	return 0;
}

/**
 * printElfVersion - Print ELF version.
 * @buffer: The ELF header
 */
void printElfVersion(const unsigned char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);

	if (buffer[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * printElfOsAbi - Print ELF OS/ABI.
 * @buffer: The ELF header
 */
void printElfOsAbi(const unsigned char *buffer)
{
	const char *osTable[19] = {
			"UNIX - System V",
			"UNIX - HP-UX",
			"UNIX - NetBSD",
			"UNIX - GNU",
			"<unknown: 4>",
			"<unknown: 5>",
			"UNIX - Solaris",
			"UNIX - AIX",
			"UNIX - IRIX",
			"UNIX - FreeBSD",
			"UNIX - Tru64",
			"Novell - Modesto",
			"UNIX - OpenBSD",
			"VMS - OpenVMS",
			"HP - Non-Stop Kernel",
			"AROS",
			"FenixOS",
			"Nuxi CloudABI",
			"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");

	if (buffer[EI_OSABI] < 19)
		printf("%s\n", osTable[(unsigned int)buffer[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buffer[EI_OSABI]);
}

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
void printElfEntryPoint(const unsigned char *buffer, size_t bitMode, int bigEndian)
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
