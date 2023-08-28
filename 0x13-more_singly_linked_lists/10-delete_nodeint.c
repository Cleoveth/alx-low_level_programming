#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a
 * given index in a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded,
 * -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
