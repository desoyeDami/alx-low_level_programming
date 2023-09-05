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
	int i, s1len = 0, s2len = 0;
	char *concat;

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0')
		s2len++;

	concat = malloc(s1len + s2len + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i <= s1len; i++)
		concat[i] = s1[i];

	concat[s1len + s2len] = '\0';
	return (concat);
}
