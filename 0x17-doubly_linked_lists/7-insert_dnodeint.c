#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	while (temp != NULL)
	{
	if (count == idx - 1)
	{
	new_node->prev = temp;
	new_node->next = temp->next;

	if (temp->next != NULL)
	temp->next->prev = new_node;

	temp->next = new_node;
	return (new_node);
	}

	temp = temp->next;
	count++;
	}

	free(new_node);
	return (NULL);
}
