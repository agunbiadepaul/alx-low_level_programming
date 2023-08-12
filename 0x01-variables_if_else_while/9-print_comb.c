#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations
 * of single-digit numbers, separated by ', ',
 * and in ascending order, using the putchar function.
 *
 * Return: Always 0 (indicating successful completion)
 */
int main(void)
{
	int num1, num2;
	int separator_count = 0;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (separator_count < 44)
			{
				putchar(',');
				putchar(' ');
				separator_count += 2;
			}
		}
	}
	putchar('\n');

	return (0);
}
