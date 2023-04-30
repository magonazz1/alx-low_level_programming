#include "lists.h"

/**
 * free_listint2 - function that frees listint list plus sets the head to NULL
 *
 * @head: pointer to a pointer to the first node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *now;
	listint_t *next;
	listint_t **ptr_head = head;

	if (ptr_head == NULL)
	{
		return;
	}
	else
	{
		now = *ptr_head;
		while (now != NULL)
		{
			next = now->next;
			free(now);
			now = next;
		}
		*ptr_head = NULL;
	}
}
