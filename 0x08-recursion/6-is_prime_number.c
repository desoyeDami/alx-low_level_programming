#include "main.h"

/**
 * is_prime_recursive - function declaration
 * @n: number to be tested
 * @div: to divide the number
 * Return: 0 or 1
 */

int is_prime_recursive(int n, int div);

/**
 * is_prime_recursive - function definition
 * @n: number to be tested
 * @div: divisor to be used
 * Description: checks how dividable a number can be
 * Return: 0 for divisible, 1 for !divisible
 */

int is_prime_recursive(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}
	else if (div == n / 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_recursive(n, div + 1));
	}
}

/**
 * is_prime_number - function definition
 * @n: number to be tested
 * Description: fishing out prime numbers
 * Return: 0 for not prime, 1 for prime
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	else
	{
	return (is_prime_recursive(n, div));
	}
}
