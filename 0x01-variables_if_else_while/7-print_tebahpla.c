#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet lowercase in reverse followed by a new line
 *
 * while loops have been used
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
