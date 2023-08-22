#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: Pointer to a null-terminated string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		printf("[%d] ", (int)str[i]);
		i += 2;
	}

	_putchar('\n');
}
