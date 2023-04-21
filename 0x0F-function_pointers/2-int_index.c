#include "function_pointers.h"
/**
 * int_index - functiont that searches for an integer
 *
 * @array: the array to look into
 *
 * @size: number of elements in the array
 *
 * @cmp: pointer to the function used
 *
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
