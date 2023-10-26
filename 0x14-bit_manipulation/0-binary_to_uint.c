#include "main.h"

/**
 * binary_to_uint - function that convert a binary number to an unsigned int
 * @b: a character pointer containing the binary number
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int power;
	int base;

	base = 2;
	sum = 0, power = 1;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);

		for (j = length - 1; j > 0; j--)
		power = power * base;
		sum = sum + (power * (b[i] - 48));
		length--;
		power = 1;
	}
	return (sum);
}
