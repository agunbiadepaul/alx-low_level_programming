#include "main.h"
#include <stddef.h> 

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: Pointer to the first time that c
 * appears in s, or NULL if it isn't.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

	s++;
	}

	if (c == '\0')
	return (s);

	return (NULL);
}
