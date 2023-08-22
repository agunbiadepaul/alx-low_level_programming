#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
