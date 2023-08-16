#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	_putchar((sum / 100000) + '0');
	_putchar(((sum / 10000) % 10) + '0');
	_putchar(((sum / 1000) % 10) + '0');
	_putchar(((sum / 100) % 10) + '0');
	_putchar(((sum / 10) % 10) + '0');
	_putchar((sum % 10) + '0');
	_putchar('\n');

	return (0);
}
