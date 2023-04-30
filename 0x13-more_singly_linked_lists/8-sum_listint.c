#include "lists.h"

/**
 * sum_listint -  function that returns sum of all the data (n) of a listint_t
 *
 * @head: pointer to the head node of the list
 *
 * Return: if the list is empty, return 0, else sum of all data in the linked
 */
int sum_listint(listint_t *head)
{
	listint_t *now = head;
	int sum = 0;

	if (now == NULL)
	{
		return (0);
	}
	else
	{
		while (now != NULL)
		{
			sum = sum + now->n;
			now = now->next;
		}
		return (sum);
	}
}
