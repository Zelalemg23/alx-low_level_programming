#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int count = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	if (*head != NULL)
	(*head)->prev = NULL;
	free(current);
	return (1);
	}

	while (current != NULL && count < index - 1)
	{
	current = current->next;
	count++;
	}

	if (current == NULL || current->next == NULL)
	return (-1);

	temp = current->next;
	current->next = temp->next;

	if (temp->next != NULL)
	temp->next->prev = current;

	free(temp);
	return (1);
}
