#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 *
 * @head: pointer to the head node of the list.
 *
 * Return: The address of the node where the loop starts
 *
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *speedster;

	if (head == NULL)
	{
		return (NULL);
	}
	slow = head;
	speedster = head;

	while (speedster != NULL && speedster->next != NULL)
	{
		slow = slow->next;
		speedster = speedster->next->next;

		if (slow == speedster)
		{
			slow = head;
			while (slow != speedster)
			{
				slow = slow->next;
				speedster = speedster->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
