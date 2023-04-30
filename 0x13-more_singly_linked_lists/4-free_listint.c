#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: pointer to the head of the listint list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *now = head;

	while (head != NULL)
	{
		now = head;
		head = head->next;
		free(now);
	}
}
