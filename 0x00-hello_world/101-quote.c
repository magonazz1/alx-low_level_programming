#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 1 Always (Success)
 */
int main(void)
{
	const char *part1 = "and that piece of art is useful\" - ";
	const char *part2 = "Dora Korpar, 2015-10-19\n";

	fputs(part1, stdout);
	fputs(part2, stdout);

	return (1);
}
