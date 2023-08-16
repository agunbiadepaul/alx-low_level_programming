#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'A';

	/* Print result for uppercase 'A' */
	printf("%d\n", _isalpha(c)); /* This should print 1 (true) */

	c = '7';

	/* Print result for digit '7' */
	printf("%d\n", _isalpha(c)); /* This should print 0 (false) */

	return (0);
}
