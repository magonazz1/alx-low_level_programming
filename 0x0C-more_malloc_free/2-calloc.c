#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 *
 * @size: size of elements in bytes
 *
 * Return: Always 0 (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size * nmemb; x++)
	{
		((char *)mem)[x] = 0;
	}
	return (mem);
}
