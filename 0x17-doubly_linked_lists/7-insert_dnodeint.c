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
	dlistint_t *new_node, *tmp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	while (count < idx - 1)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
