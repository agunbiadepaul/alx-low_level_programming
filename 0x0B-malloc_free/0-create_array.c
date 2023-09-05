#include <stdlib.h>

/**
 * create_array - create an array of chars initialized with a char
 * @size: size of array
 * @c: Character to initialize array with.
 *
 * Return: return to the created array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
