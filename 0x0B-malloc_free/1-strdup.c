#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer to a new string which is
 *		a dubplicate of the string str
 *
 * @str: the string to duplicate
 *
 * Return: if str == NULL or insufficient memory is available, return NULL
 *		otherwise return a pointer to the duplicate string
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
