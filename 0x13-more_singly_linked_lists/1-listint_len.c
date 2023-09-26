#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements printed.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
