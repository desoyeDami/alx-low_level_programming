#include "main.h"

/**
 * reverse_array - Reverses the order of elements in an integer array.
 * @a: The integer array to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
