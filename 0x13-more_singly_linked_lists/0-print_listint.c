#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements printed.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current_point = h;

	if (current_point == NULL)
	{
		return (0);
	}
	while (current_point != NULL)
	{
		printf("%d\n", current_point->n);
		current_point = current_point->next;
		count++;
	}

	return (count);
}
