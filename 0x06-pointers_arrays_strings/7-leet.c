#include "main.h"

/**
 * leet - Converts specific characters in a string to
 * "leet" (1337) equivalents.
 *
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[j] == str[i])
				str[i] = d[j];
		}
	}

	return (str);
}
