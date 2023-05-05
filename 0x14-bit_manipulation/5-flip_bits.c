#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * 		to get from one number to another
 * @n: the 1st number to flip
 *
 * @m: the 2nd number to flip
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int check = 0;
	unsigned long int x = n ^ m;

	while (x != '\0')
	{
		check = check + (x & 1);
		x >>= 1;
	}
	return (check);
}
