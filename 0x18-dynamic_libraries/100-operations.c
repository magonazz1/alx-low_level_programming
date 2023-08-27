#include "main.h"
/* This C file defines various math functions to be used by a python script */
/**
 * add - adds numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: always 0
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return:always 0
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: always 0
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divided two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: always 0
 */
int _div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * mod - performs a modulo function
 * @a: parameter 1
 * @b: parameter 2
 * Return: always 0
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
