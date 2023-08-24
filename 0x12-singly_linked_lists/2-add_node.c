#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: head of the linked list.
 * @str: string to be added.
 * Return: address of the new element on success
 * NULL on failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t element;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (element = 0; str[element]; element++)
		;

	new->len = element;
	new->next = *head;
	*head = new;

	return (*head);
}
