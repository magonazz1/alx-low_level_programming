#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - it adds a new node at the end of a list_t list
 *
 * @head: pointer to the head of the list_t list
 *
 * @str: string to be added to the new node
 *
 * Return: address of the new element, otherwise NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	return (newNode);
}
