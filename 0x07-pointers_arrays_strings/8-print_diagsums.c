#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - function that prints the sum
  *
  * of two diagonals of square matrix
  *
  * @a: matrix
  *
  * @size: size
  *
  * Return: Always 0
  */
void print_diagsums(int *a, int size)
{
	int x;
	int num1 = 0;
	int num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 += a[(size + 1) * x];
		num2 += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", num1, num2);
}
