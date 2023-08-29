#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the bytes to match
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);

			a++;
		}

		s++;
	}

	return ((char *)0);
}
