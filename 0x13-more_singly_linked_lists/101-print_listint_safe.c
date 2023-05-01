#include "lists.h"

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - function that counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: when list is not looped return 0.
 *
 * else, the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *speedster;
	size_t node = 1;

	if (head->next == NULL)
	{
		return (0);
	}
	if (head == NULL)
	{
		return (0);
	}

	slow = head->next;
	speedster = (head->next)->next;

	while (speedster)
	{
		if (slow == speedster)
		{
			slow = head;
			while (slow != speedster)
			{
				node++;
				slow = slow->next;
				speedster = speedster->next;
			}
			slow = slow->next;
			while (slow != speedster)
			{
				node++;
				slow = slow->next;
			}
			return (node);
		}
		slow = slow->next;
		speedster = (speedster->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t list safely
 *
 * @head: pointer to the head of the listint_t
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node;
	size_t dx;

	node = looped_listint_len(head);
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (dx = 0; dx < node; dx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
