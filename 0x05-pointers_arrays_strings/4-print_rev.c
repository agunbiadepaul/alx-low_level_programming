#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to a null-terminated string.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
