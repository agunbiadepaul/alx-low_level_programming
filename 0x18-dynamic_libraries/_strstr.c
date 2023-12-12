#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring within a string
 * @haystack: The string to search within
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring in 'haystack',
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;

		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
