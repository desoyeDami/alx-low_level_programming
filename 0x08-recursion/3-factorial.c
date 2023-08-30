#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: number to be found
 *
 * Return: 1 if n is 0, -1 if n is < 0, else n factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
