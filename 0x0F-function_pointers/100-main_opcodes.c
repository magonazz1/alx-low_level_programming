#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the opcode of the program
 *
 * @argc: The number arguments.
 *
 * @argv: An array of arguments.
 *
 * Return: 0 if successful, otherwise 1 or 2.
 */
int main(int argc, char *argv[])
{
	unsigned char *ad = (unsigned char *)main;
	int x = 0;
	int bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (; x < bytes; x++)
	{
		printf("%.2x", *ad);

		if (x != bytes - 1)
		{
			printf(" ");
		}
		ad++;
	}
	printf("\n");
	return (0);
}
