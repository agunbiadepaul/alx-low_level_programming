#include "main.h"

/**
 * calculate_even_fibonacci_sum - Calculates the sum of even Fibonacci numbers
 *
 * Return: Sum of even Fibonacci numbers
 */
long int calculate_even_fibonacci_sum(void)
{
	long int prev1 = 1, prev2 = 2, current = 0, sum = 2;

	while (current <= 4000000)
	{
		current = prev1 + prev2;
		if (current % 2 == 0)
			sum += current;

		prev1 = prev2;
		prev2 = current;
	}

	return (sum);
}
