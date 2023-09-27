#include "lists.h"


/**
 * get_nodeint_at_index - Retrieves a node from a linked list
 * at a specific index.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: If the index is out of bounds or if the list is empty, returns NULL.
 *         Otherwise, returns a pointer to the node at the specified index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
