#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to the newly allocated concatenated string
 *         If the function fails, it returns NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, length = 0, index_concat = 0;
	int s2_length = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s2[i] != '\0'; i++)
		s2_length++;

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	new_str = malloc((length + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[index_concat++] = s1[i];

	if (n >= (unsigned int)s2_length)
	{
		for (i = 0; s2[i]; i++)
			new_str[index_concat++] = s2[i];
	}
	else
	{
		for (i = 0; (unsigned int)i < n; i++)
			new_str[index_concat++] = s2[i];
	}

	new_str[index_concat] = '\0';

	return (new_str);
}

