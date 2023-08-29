#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to locate
 *
 * Return: Pointer to the beginning of the
 * located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return ((char *)0);
}
