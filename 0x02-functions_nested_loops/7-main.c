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

	n = 98;
	printf("Last digit of %d: %d\n", n, print_last_digit(n));

	n = 0;
	printf("Last digit of %d: %d\n", n, print_last_digit(n));

	n = -1024;
	printf("Last digit of %d: %d\n", n, print_last_digit(n));

	return (0);
}
