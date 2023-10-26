#include "main.h"

/**
 * _putchar - Writes a character at standard output
 * @c: The character to write
 *
 * Return: 1 on sucess, while on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
