#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The total number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t element_count = 0;

    while (h != NULL)
    {
        element_count++;
        h = h->next;
    }

    return element_count;
}
