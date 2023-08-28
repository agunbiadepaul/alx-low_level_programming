#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to string of characters to match
 *
 * Return: Number of bytes in the initial segment of s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;

	while (*s)
	{
		found = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (found)
			length++;
		else
			break;

		s++;
		accept = accept - length + 1;
	}

	return (length);
}
