#include "lists.h"

/**
 * dlistint_len - Count the number of elements in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements (nodes) in the doubly linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
