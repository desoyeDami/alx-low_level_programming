#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if one of the string is empty else concat
 */
char *str_concat(char *s1, char *s2)
{
	int i, length = 0, concat_indx = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	new_str = malloc(length * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[concat_indx++] = s1[i];

	for (i = 0; s2[i]; i++)
		new_str[concat_indx++] = s2[i];

	return (new_str);
}
