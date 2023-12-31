#include "main.h"

/**
 * calculate_sqrt - Helper function to calculate
 * the square root using recursion.
 * @n: The number for which square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The square root if found, otherwise -1.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);
	return (calculate_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which square root is to be calculated.
 *
 * Return: The square root of n, or -1 if n doesn't
 * have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calculate_sqrt(n, 0));
}
