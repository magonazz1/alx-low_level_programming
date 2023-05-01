#include "lists.h"

/**
 * *reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: pointer to a pointer to the head node of listint list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *now = *head;

	while (now != NULL)
	{
		listint_t *next = now->next;

		now->next = previous;
		previous = now;
		now = next;
	}
	*head = previous;
	return (*head);
}
