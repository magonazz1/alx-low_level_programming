#include "search_algos.h"

/**
 * linear_search - Searches value in array of ints using the Linear algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
