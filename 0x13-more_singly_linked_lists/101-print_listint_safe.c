#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 *
 * @head: pointer to the head of the listint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *now = head;
	const listint_t *temp;

	count = 0;
	while (now != NULL)
	{
		printf("[%p] %d\n", (void *)now, now->n);
		count++;
		temp = now;
		now = now->next;

		if (temp <= now)
		{
			printf("-> [%p] %d\n", (void *)now, now->n);
			exit(98);
		}
	}

	return (count);
}
