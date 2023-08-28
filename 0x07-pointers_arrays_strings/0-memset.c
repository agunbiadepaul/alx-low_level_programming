#include "main.h"

/**
 * _memset - Fills the first n bytes pointed to by
 * s with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
