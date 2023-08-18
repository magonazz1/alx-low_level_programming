#include "lists.h"

/**
 * dlistint_len - function that ounts the number of elements
 * 			in a linked dlistint_t list.
 *
 * @h: head of the dlistint_t list.
 *
 * Return: number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}
