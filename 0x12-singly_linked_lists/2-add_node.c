#include "lists.h"

/**
 * add_node - adds a new node at the end of a list.
 * @head: head of the linked list.
 * @str: string to add to the list.
 * Return: address to the new element on success
 * NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{

	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
