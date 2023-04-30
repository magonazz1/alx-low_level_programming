#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 *
 * @head: pointer to a pointer to the first node of the list
 *
 * @n: integer to store
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
}
