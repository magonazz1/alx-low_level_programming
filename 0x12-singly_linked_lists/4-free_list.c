#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list
 *
 * @head: pointer to the head of the list_t list
 *
 * Return: void return
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
