#include "main.h"
/**
 * factorial - function that returns a factorial of a given number
 *
 * @n: integer parameter
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
