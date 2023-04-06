#include "main.h"

int find_sqrt(int x1, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Function that will find the
 *
 * natural square root of an inputted number.
 *
 * @x1: The number to find the square root of
 *
 * @root: root number to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int find_sqrt(int x1, int root)
{
	if ((root * root) == x1)
		return (root);

	if (root == x1 / 2)
		return (-1);

	return (find_sqrt(x1, root + 1));
}
/**
 * _sqrt_recursion -Returns the natural square root of a number
 *
 * @n: The number to return the square root of
 *
 * Return: If n has a natural square root - the natural square root of n
 *
 * if n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
