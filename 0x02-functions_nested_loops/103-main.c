#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	long int sum;

	sum = calculate_even_fibonacci_sum();

	printf("Sum of even-valued terms in Fibonacci sequence: %ld\n", sum);

	return (0);
}
