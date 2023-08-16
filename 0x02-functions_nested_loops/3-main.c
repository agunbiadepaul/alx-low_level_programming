#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	/* Print result for lowercase 'a' */
	printf("%d\n", _islower(c)); /* This should print 1 (true) */

	c = 'A';

	/* Print result for uppercase 'A' */
	printf("%d\n", _islower(c)); /* This should print 0 (false) */

	return (0);
}
