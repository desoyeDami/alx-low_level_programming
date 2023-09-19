#include "main.h"

/**
 * _strncpy - Copies at most n bytes of a source string to a destination string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the resulting destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i] != '\0')
	{
		src_len++;
		i++;
	}

	if (n > src_len)
		n = src_len;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
