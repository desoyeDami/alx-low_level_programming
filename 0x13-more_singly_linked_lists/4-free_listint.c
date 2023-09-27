#include "lists.h"

/**
 * free_listint - Frees the memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function iterates through the linked list and frees the
 * memory associated with each node, including the head node.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
