#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 *
 * @head: pointer to a pointer to the head node of the list
 *
 * @n: integer to store
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
		return (new);
	}
}
