#include "main.h"

/**
 * flip_bits - Calculates the bit difference between two numbers.
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int numb_of_flips = 0;

	while (xor_result)
	{
		numb_of_flips += xor_result & 1;
		xor_result >>= 1;
	}

	return (numb_of_flips);
}
