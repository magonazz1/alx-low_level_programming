#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints base 10 numbers starting from 0 followed by a new line
 *
 * while loops have been used
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
