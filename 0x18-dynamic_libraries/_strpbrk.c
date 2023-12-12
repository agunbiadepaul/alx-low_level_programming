#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of characters to search for
 *
 * Return: A pointer to the first occurrence in 's' of
 * any character from 'accept',
 * or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}

	return (NULL);
}
