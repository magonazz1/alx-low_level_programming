#include "lists.h"

/**
 * *insert_nodeint_at_index - it inserts a new node at a given position
 *
 * @head: pointer to the first node of the list
 *
 * @idx: the index of the list where the node should be added
 *
 * @n: integer to store
 *
 * Return: NULL if it failed, else, address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *now = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (idx == 0)
	{
		new->next = now;
		*head = new;
		return (new);
	}

	for (x = 0; now != NULL; x++)
	{
		if (x == idx - 1)
		{
			new->next = now->next;
			now->next = new;
			return (new);
		}
		now = now->next;
	}
	free(new);
	return (NULL);
}
