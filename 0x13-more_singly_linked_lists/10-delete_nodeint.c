#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific
 * index in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: If the deletion is successful, returns 1. Otherwise, returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *tmp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			*head = (*head)->next;
			free(current);
		}
		return (1);
	}
	while (current && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
