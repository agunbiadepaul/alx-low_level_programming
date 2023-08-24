#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aeotlAEOTL";
	char *leet_replacements = "4307143071";

	while (*ptr != '\0')
	{
		char *leet_ptr = leet_chars;
		char *leet_rep = leet_replacements;

		while (*leet_ptr != '\0')
		{
			if (*ptr == *leet_ptr)
			{
				*ptr = *leet_rep;
				break;
			}

			leet_ptr++;
			leet_rep++;
		}

		ptr++;
	}

	return (str);
}
