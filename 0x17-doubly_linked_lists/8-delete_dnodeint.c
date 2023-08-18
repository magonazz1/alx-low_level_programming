#include "lists.h"

/**
 * delete_dnodeint_at_index - function that eletes a node from
 *				a dlistint_t at a given index.
 *
 * @head: pointer to the head of the dlistint_t.
 *
 * @index: index of the node to delete.
 *
 * Return: return 1 if success, else return -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	for (; index != 0; index--)
	{
		if (tmp == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
		}
	}

	free(tmp);
	return (1);
}
