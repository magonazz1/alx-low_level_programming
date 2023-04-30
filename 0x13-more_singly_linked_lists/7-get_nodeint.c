#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a listint_t
 *
 * @head: pointer to the head of the listint list
 *
 * @index: index of the node
 *
 * Return: if the node doesn't exist, return NULL, else pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *now = head;
	unsigned int x;

	for (x = 0; now != NULL && x < index; x++)
	{
		now = now->next;
	}
	return (now);
}
