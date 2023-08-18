#include "lists.h"

/**
 * sum_dlistint - function that sums all the data of a dlistint_t list.
 *
 * @head: head of the dlistint_t list.
 *
 * Return: sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
