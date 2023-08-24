#include "main.h"

/**
 * rot13 - Encode a string using the rot13 algorithm.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_alpha = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr != '\0')
	{
		char *alpha_ptr = alpha;
		char *rot13_ptr = rot13_alpha;

		while (*alpha_ptr != '\0')
		{
			if (*ptr == *alpha_ptr)
			{
				*ptr = *rot13_ptr;
				break;
			}

			alpha_ptr++;
			rot13_ptr++;
		}

		ptr++;
	}

	return (str);
}
