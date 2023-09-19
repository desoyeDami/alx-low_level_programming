#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0, src_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		src_len++;

	for (i = 0; i <= src_len; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + src_len] = '\0';
	return (dest);
}
