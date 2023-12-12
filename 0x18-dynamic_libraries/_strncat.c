#include "main.h"

/**
 * _strncat - concatenates two strings, but with a maximum limit
 * @dest: The destination string
 * @src: The source string to be appended to dest
 * @n: The maximum number of characters from src to append
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
