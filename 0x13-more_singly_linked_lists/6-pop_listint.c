#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: If the list is empty, returns 0. Otherwise, returns 1.
 *
 * Description: This function removes the head node from the linked list and
 * updates the head pointer to point to the new head, effectively deleting
 * the old head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int temp;
	
	if (*head == NULL)
		return (0);

	temp = current->n;
	*head = current->next;
	free(current);
	return (temp);
}
