#include "lists.h"

/**
 * sum_listint - Computes the sum of all elements in a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all elements in the list. If the list is empty, rtns 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
