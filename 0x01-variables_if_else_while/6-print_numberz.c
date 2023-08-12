#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line,
 *              using the putchar function.
 *
 * Return: Always 0 (indicating successful completion)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}
