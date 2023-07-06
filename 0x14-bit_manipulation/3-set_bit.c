#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: pointer to the number
 *
 * @index: index of the bit to set 1
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n |= (1 << index);
		return (1);
	}
}
