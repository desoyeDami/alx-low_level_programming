#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (count == idx)
			break;
		count++;
		temp = temp->next;
	}
	if (temp == NULL && count != idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp;
	new_node->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = new_node;
	temp->prev = new_node;
	return (new_node);
}
