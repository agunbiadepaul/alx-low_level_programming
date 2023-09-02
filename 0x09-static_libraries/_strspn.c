#include "main.h"

/**
 * _strspn - gets the length of a prefix substring that consists
 * of only characters from a specified set.
 * @s: The string to be scanned
 * @accept: The set of characters to match
 *
 * Return: The number of bytes in the initial segment of 's'
 * which consist only of characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	int i;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
