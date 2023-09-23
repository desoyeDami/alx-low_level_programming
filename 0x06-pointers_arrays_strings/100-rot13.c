#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 *
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *d = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 52 ; j++)
		{
			if (*(str + i) == c[j])
			{
				*(str + i) = d[j];
				break;
			}
		}
	}

	return (str);
}
