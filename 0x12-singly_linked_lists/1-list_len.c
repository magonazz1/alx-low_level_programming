#include "lists.h"
#include <stddef.h>

/**
 * list_len - it returns the number of elements in a linked list_t list.
 *
 * @h: pointer to the head of list_t
 *
 * Return: number of elements in the list_t
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t numelements = 0;

	while (current != NULL)
	{
		numelements++;
		current = current->next;
	}
	return (numelements);
}
