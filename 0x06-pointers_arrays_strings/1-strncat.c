#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit on the number of characters to copy
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate from src
 *
 * Return: A pointer to the resulting concatenated string (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0, src_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		src_len++;

	if (n > src_len)
		n = src_len;

	for (i = 0; i <= n; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + src_len] = '\0';
	return (dest);
}
