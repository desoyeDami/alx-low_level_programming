#include "main.h"

/**
 * n_sqrt - function that returns the natural square root of a number
 * @num: the number
 * @root: the root
 *
 * Return: square root or -1
 */

int n_sqrt(int num, int root);


/**
 * n_sqrt - function definition
 * @num: the number whose square root is being found
 * @root: the root to be tried
 *
 * Description: if the number has natural square root
 * Return: the square root or -1
 */
int n_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if (root == num / 2)
	{
		return (-1);
	}
	else
	{
		return (n_sqrt(num, root + 1));

	}
}

/**
 * _sqrt_recursion - function definition
 *
 * @n: the number to return square
 * Description: If n has natural square return n else
 * return -1
 * Return: the square root  or -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n_sqrt(n, root));
	}
}
