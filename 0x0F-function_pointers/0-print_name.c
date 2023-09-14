#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		if (name[0] != '\0')  // Check if the first character is not the null terminator
			f(name);
		else
			return;
	}
	else
	{
		return;
	}
}
