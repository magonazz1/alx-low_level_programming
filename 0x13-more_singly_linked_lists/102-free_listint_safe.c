#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list of integers
 *
 * @h: pointer to a pointer to the head node of the list
 *
 * Return: size of the list that was returned
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *now;
	listint_t *next;
	listint_t *ptr_h = *h;
	size_t size = 0;

	if (ptr_h == NULL)
	{
		return (0);
	}
	now = ptr_h;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		size++;

		if (next >= now)
		{
			break;
		}
		now = next;
	}
	*h = NULL;
	return (size);
}
