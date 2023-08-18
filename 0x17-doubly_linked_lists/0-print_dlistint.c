#include "lists.h"

/**
 * print_dlistint - function thatprints the elements of a dlistint_t list
 *
 * @h: head of the dlistint_t list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
