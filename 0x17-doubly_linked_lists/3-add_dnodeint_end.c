#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 *			at the end of a dlistint_t list.
 *
 * @head: pointer to the head of the dlistint_t list.
 *
 * @n: integer for the new node to contain.
 *
 * Return: when function fails, return NULL.
 *		else, return address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
