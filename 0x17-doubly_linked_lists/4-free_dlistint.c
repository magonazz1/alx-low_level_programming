#include "lists.h"

/**
 * free_dlistint - Function that frees a linked dlistint_t list.
 *
 * @head: head of the dlistint_t list.
 *
 * Return: void type return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
