#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - function that prints all elements of list_t
 *
 * @h: pointer to the head of list_t
 *
 * Return: nodes in the list_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
