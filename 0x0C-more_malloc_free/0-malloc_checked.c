#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: is the function parameter
 *
 * Return: a pointer to the allocated memory, and if ut fails
 *
 * the function should terminate with a status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
