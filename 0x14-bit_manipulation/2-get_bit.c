#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: number to get bit from
 *
 * @index: index of bit to get
 *
 * Return: value of the bit at index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
