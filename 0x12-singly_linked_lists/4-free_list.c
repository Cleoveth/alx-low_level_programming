#include "lists.h"

/**
 * free_list - frees a list.
 * @head: head of linked list.
 * Return: 0 on success
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
