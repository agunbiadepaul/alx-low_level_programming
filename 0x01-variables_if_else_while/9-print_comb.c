#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers, separated by ', ', and in ascending order,
 * using the putchar function.
 *
 * Return: Always 0 (indicating successful completion)
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
	{
		putchar(num1 + '0');
		if (num1 < 9)
			printf(", ");
	}

	putchar('\n');

	return (0);
}
