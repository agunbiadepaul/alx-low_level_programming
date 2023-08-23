#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: Negative if s1 is less than s2,
 *         Positive if s1 is greater than s2,
 *         0 if s1 is equal to s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-(*s2));
	}
	else if (*s1 != '\0' && *s2 == '\0')
	{
		return (*s1);
	}

	return (0);
}
