#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: pointer to the newly allocated string
 * Return: NULL if 0 else ptr
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	len++;

	ptr = malloc(len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		ptr[i] = str[i];

	ptr[len] = '\0';
	return (ptr);
}
