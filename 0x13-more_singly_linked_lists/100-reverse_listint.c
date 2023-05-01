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
	listint_t *previous;
	listint_t *next;

	if (*head == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}

	previous = NULL;
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
