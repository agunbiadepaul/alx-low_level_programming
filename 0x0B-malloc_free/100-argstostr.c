#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int total_len = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;
	}

	concat = (char *)malloc((total_len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[k++] = av[i][j];
		}
		concat[k++] = '\n';
	}

	concat[k] = '\0';

	return (concat);
}
