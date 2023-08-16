#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = -98;
	printf("Absolute value of %d: %d\n", n, _abs(n));

	n = 0;
	printf("Absolute value of %d: %d\n", n, _abs(n));

	n = 42;
	printf("Absolute value of %d: %d\n", n, _abs(n));

	return (0);
}
