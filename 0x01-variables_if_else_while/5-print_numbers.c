#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints numbers of base 10 starting from 0
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
