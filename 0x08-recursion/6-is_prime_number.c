#include "main.h"

int is_divisible(int x1, int dv);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 *
 * @x1: integer parameter to be checked.
 *
 * @dv: divisor parameter
 *
 * Return: if the number is divisible - 0.
 *         if the number is not divisible - 1.
 */
int is_divisible(int x1, int dv)
{
	if (x1 % dv == 0)
	{
		return (0);
	}
	else if (dv == x1 / 2)
	{
		return (1);
	}
	return (is_divisible(x1, dv + 1));
}
/**
 * is_prime_number - funtion that Checks if a number is prime
 *
 * @n: integer parameter to be checked
 *
 * Return: if the integer is not prime - 0.
 *         if the number is prime - 1.
 */
int is_prime_number(int n)
{
	int dv = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, dv));
}
