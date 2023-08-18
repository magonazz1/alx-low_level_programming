#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *				in a dlistint_t list at a given position.
 *
 * @h: pointer to the head of the dlistint_t list.
 *
 * @idx: position to insert the new node.
 *
 * @n: integer for the new node to contain.
 *
 * Return: when function fails, return NULL.
 *		else, return address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
	}

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
