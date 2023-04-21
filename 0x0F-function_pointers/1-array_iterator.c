#include "function_pointers.h"
/**
 * array_iterator - function that excecutes a function given as a parameter
 *
 * @array: the array
 *
 * @size: the size of the array
 *
 * @action: a pointer to the function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
