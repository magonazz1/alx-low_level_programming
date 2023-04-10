#include <stdio.h>
/**
 * main - Entry pointof my program
 *
 * @argc: function parameter
 *
 * @argv: function parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
