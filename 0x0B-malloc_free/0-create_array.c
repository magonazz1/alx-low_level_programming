#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars
 *
 * @size: size of the array to create
 *
 * @c: character to initialize the array with
 *
 * Return: pointer to the created array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
