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
	unsigned int i, j, concat_length;

	unsigned int s2_length = 0, s1_length = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i] != '\0'; i++)
		s2_length++;

	if (n >= s2_length)
		concat_length = s1_length + s2_length;
	else
		concat_length = s1_length + n;

	new_str = malloc((concat_length + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
		new_str[i+j] = s2[j];

	new_str[i+j] = '\0';

	return (new_str);
}

