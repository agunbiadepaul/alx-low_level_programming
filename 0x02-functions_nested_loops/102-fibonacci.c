#include "main.h"

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
void print_fibonacci(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, next;

	_putchar('1' + '0');
	_putchar(',');
	_putchar(' ');

	_putchar('2' + '0');

	for (i = 2; i < 50; i++)
	{
		next = fib1 + fib2;
		_putchar(',');
		_putchar(' ');
		_putchar((next / 10) + '0');
		_putchar((next % 10) + '0');

		fib1 = fib2;
		fib2 = next;
	}

	_putchar('\n');

}
