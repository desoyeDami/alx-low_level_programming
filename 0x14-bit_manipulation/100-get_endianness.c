#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if little-endian, 0 if big-endian.
 */
int get_endianness(void)
{
	unsigned int sampleValue = 1;
	char *bytePtr = (char *)&sampleValue;

	if (*bytePtr == 1)
		return (1);
	else
		return (0);
}
