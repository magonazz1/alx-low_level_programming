#include "main.h"
/**
 * _pow_recursion - fucntion that prints
 *
 * the value of x raised to the power of y
 *
 * @x: integer parameter
 *
 * @y: integer parameter
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	int x_value = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	x_value = x_value * _pow_recursion(x, y - 1);
	return (x_value);
}
