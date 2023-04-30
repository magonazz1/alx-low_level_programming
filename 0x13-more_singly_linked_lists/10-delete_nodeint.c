#include "lists.h"
/**
 * delete_nodeint_at_index - function thst deletes the node at the given index
 *
 * @head: pointer to a pointer to the first node of the linked list
 *
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *prev;
	listint_t *now;

	if (head == NULL)
	{
		return (-1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	now = *head;
	if (index == 0)
	{
		*head = now->next;
		free(now);
		return (1);
	}

	for (x = 0; x < index && now != NULL; x++)
	{
		prev = now;
		now = now->next;
	}

	if (now == NULL)
	{
		return (-1);
	}

	prev->next = now->next;
	free(now);

	return (1);
}
