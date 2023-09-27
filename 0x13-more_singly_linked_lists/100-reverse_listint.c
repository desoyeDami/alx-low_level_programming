#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prv = NULL;
	listint_t *nxt;

	if (*head == NULL)
		return (*head);

	while (current)
	{
		/* Save the next node in the original list*/
		nxt = current->next;
		/* Reverse the link of the current node */
		current->next = prv;
		/* Move previous and current one step forward */
		prv = current;
		current = nxt;
	}

	/* Update the head pointer to the new head of the reversed list */
	*head = prv;

	return (*head);
}
