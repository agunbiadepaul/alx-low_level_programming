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

	n = 10;
	printf("Sign of %d: %d\n", n, print_sign(n));

	n = 0;
	printf("Sign of %d: %d\n", n, print_sign(n));

	n = -7;
	printf("Sign of %d: %d\n", n, print_sign(n));

	return (0);
}
