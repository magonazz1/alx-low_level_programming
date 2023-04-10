#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 *
 * @argc: integer parameter
 *
 * @argv: string parameter
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		for (i = 0; i < num_coins; i++)
		{
			while (cents >= coin_values[i])
			{
				cents = cents - coin_values[i];
				coins++;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
