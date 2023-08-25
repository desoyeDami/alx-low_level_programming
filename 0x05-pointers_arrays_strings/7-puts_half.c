#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string
 * Return:(void)
 */

void puts_half(char *str)
{
	int len = 0;
	int d;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		d = (len - 1) / 2;
		d += 1;

	}
	else
	{
		d = len / 2;
	}
	for (; d < len; d++)
	{
		putchar(str[d]);
	}
	putchar('\n');
}
