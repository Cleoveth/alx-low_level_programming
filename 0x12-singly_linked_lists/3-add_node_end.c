#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list.
 * @head: head of linked list.
 * @str: string to be added.
 * Return: the address of the new elements on success
 * NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	size_t element;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (element = 0; str[element]; element++)
		;

	new_node->len = element;
	new_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (*head);
}
