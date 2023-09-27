#include "lists.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a specific index
 * in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to store in the new node.
 *
 * Return: If the insertion is successful, returns a pointer to the new node.
 *         If the index is out of bounds or memory allocation fails, rtns NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *newNode;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current)
	{
		if (count == idx - 1)
		{
			newNode = malloc(sizeof(listint_t));

			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}

		current = current->next;
		count++;
	}

	return (NULL);
}
