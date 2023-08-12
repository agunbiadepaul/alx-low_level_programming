#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 *              of two digits (smallest combination), separated by ', ',
 *              and in ascending order, using the putchar function.
 *
 * Return: Always 0 (indicating successful completion)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 < 8 || num2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
