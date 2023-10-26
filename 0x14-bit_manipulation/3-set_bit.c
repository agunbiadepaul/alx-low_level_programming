#include "main.h"

/**
 * set_bit - set a bit number to one
 * @n: Pointer to the bit manipulation
 * @index: position of the bit to be manipulated
 * Return: return 1 when successful and -1 in error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
