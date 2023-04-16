#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers
 *
 * @min: minimum integer parameter
 *
 * @max: maximum integer parameter
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int x;
	int size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++, min++)
	{
		*(array + x) = min;
	}
	return (array);
}
