#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			_putchar(argv[0][i]);
			i++;
		}
		_putchar('\n');
	}

	return (0);
}
int _putchar(char c)
{
	return write(1, &c, 1);
}
