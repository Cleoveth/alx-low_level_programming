#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) stored in the deleted head node,
 * or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int output;

		if (*head == NULL)
		{
			return (0);
		}

	temp = *head;
	*head = (*head)->next;
	output = temp->n;
	free(temp);

	return (output);
}
