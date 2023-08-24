#include "main.h"

/**
 * infinite_add - Add two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result, or 0 if result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, idx1, idx2, r_idx;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	carry = 0;
	idx1 = len1 - 1;
	idx2 = len2 - 1;
	r_idx = size_r - 1;
	r[r_idx] = '\0';

	while (idx1 >= 0 || idx2 >= 0 || carry > 0)
	{
		int digit1 = (idx1 >= 0) ? n1[idx1] - '0' : 0;
		int digit2 = (idx2 >= 0) ? n2[idx2] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;

		if (r_idx > 0)
		{
			r[--r_idx] = (sum % 10) + '0';
		}
		else
		{
			return (0);
		}
		if (idx1 >= 0)
			idx1--;
		if (idx2 >= 0)
			idx2--;
	}

	return (&r[r_idx]);
}
