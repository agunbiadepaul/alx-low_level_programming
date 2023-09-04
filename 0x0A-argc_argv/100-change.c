#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	int i;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; cents > 0; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			coins++;
		}
	}

	printf("%d\n", coins);

	return (0);
}
