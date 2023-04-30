#include "lists.h"

/**
 * listint_len - function that returns the number of elements in linked listint
 *
 * @h: pointer to the head of the list
 *
 * Return: nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *h_ptr = h;

	while (h_ptr != NULL)
	{
		len++;
		h_ptr = h_ptr->next;
	}
	return (len);
}
