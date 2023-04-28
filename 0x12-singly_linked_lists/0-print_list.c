#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all elements of list_t
 *
 * @h: pointer to the head of list_t
 *
 * Return: nodes in the list_t
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t node = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil\n");
		}
		current = current->next;
		node++;
	}
	return (node);
}
