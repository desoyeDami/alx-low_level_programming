#include "lists.h"

/**
 * free_listint2 - Frees the memory allocated for a
 * linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Description: This function iterates through the linked list, frees the
 * memory associated with each node, and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	if (*head == NULL)
		return;

	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}
