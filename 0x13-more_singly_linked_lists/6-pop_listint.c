#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *
 * @head: pointer to the head node of the list
 *
 * Return: the head node’s data (n), but if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;
	listint_t **ptr_head = head;

	if (ptr_head == NULL)
	{
		return (0);
	}
	if (*ptr_head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *ptr_head;
		*ptr_head = (*ptr_head)->next;
		data = temp->n;
		free(temp);
		return (data);
	}
}
