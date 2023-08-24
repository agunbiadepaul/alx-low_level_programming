#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'z') && capitalize_next)
		{
			*ptr = *ptr - 'a' + 'A';
			capitalize_next = 0;
		}

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
			*ptr == ',' || *ptr == ';' || *ptr == '.' ||
			*ptr == '!' || *ptr == '?' || *ptr == '"' ||
			*ptr == '(' || *ptr == ')' || *ptr == '{' ||
			*ptr == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		ptr++;
	}

	return (str);
}
