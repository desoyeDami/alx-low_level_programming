#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be stored in the new node.
 *
 * Return: Address of the new element (new_node), or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count = 0;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (new_node->str[count] != '\0')
	{
		count++;
	}

	new_node->len = count;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
