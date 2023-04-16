#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: previous pointer
 *
 * @old_size: the memory size to be adjusted
 *
 * @new_size: the adjusted memory size
 *
 * Return: AlALwyas 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	mem = malloc(new_size);

	if (mem == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(mem, ptr, old_size);
	}
	else
	{
		memcpy(mem, ptr, new_size);
	}
	free(ptr);
	return (mem);
}
