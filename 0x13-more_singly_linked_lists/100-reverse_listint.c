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
	listint_t *next;

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	(*head)->next = previous;
	return (*head);
}
