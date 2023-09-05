#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function that gets string length
 * @s: points to a string
 * Return: string length
 */
int _strlen(const char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * _strcpy - function copies string
 * @src: original string
 * @dest: copied string
 * Return: copied string
 */

void _strcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

/**
 * argstostr -  function that concatenates all the
 * arguments of your program
 *
 * @ac: arguments count
 * @av: argument vectors
 * Return: Null if argument is zero else concat
 */
char *argstostr(int ac, char **av)
{
	int i, len = 0, offset;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;

	concat = malloc(len);

	if (concat == NULL)
		return (NULL);

	offset = 0;

	for (i = 0; i < ac; i++)
	{
		_strcpy(concat + offset, av[i]);
		offset += _strlen(av[i]);
		concat[offset++] = '\n';
	}

	concat[len - 1] = '\n';

	return (concat);
}
