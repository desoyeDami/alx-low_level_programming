#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer data to be stored in the new node.
 *
 * Return: If memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == 0)
		return (0);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
