#include <stdio.h>
/**
 * main - entry point of the program
 *
 * @argv: function parameter to be printed
 *
 * @argc: function paramter
 *
 * Return: Always 0 (success)
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
