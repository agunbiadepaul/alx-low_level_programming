#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of words
 */
char **strtow(char *str)
{
	int i, j, k, words, word_len;
	char **matrix;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = malloc((words + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);

	for (i = 0, k = 0; k < words; i++)
	{
		if (str[i] != ' ')
		{
			word_len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++, word_len++)
				;
			matrix[k] = malloc((word_len + 1) * sizeof(char));
			if (matrix[k] == NULL)
			{
				for (k--; k >= 0; k--)
					free(matrix[k]);
				free(matrix);
				return (NULL);
			}
			for (j = 0; j < word_len; j++, i++)
				matrix[k][j] = str[i];
			matrix[k][j] = '\0';
			k++;
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
