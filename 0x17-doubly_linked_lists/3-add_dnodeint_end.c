#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The data (integer) to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if it fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
