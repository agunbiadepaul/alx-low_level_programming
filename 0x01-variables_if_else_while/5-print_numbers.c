#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints single-digit numbers in base 10
 *              starting from 0, followed by a new line, using putchar.
 *
 * Return: Always 0 (indicating successful completion)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}
