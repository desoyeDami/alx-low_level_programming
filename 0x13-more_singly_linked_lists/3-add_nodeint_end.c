#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer data to be stored in the new node.
 *
 * Return: If memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
	}
	return (newNode);
}
