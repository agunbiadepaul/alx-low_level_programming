#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two
 *              two-digit numbers (ranging from 0 to 99), separated by
 *              a space and comma, in ascending order,
 *              using the putchar function.
 *
 * Return: Always 0 (indicating successful completion)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = 0; num2 < 100; num2++)
		{

			printf("%02d %02d", num1, num2);

			if (num1 < 99 || num2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
