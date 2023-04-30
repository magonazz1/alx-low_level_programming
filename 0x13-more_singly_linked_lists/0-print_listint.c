#include "lists.h"

/**
 * print_listint - function that prints all elements of a listint_t list
 *
 * @h: head pointer of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *h_ptr = h;

	while (h_ptr != NULL)
	{
		printf("%d\n", h_ptr->n);
		nodes++;
		h_ptr = h_ptr->next;
	}
	return (nodes);
}
