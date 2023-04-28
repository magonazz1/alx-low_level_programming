#include "lists.h"
#include <string.h>

/**
 * add_node - it adds a new node to the beginning of a list_t list
 *
 * @head: pointer to a pointer to the head of the list
 *
 * @str: string to add to the new node
 *
 * Return: Address of the new element, otherwise NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
