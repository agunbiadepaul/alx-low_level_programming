#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	print_number_of_arguments(argc);

	return (0);
}

void print_number_of_arguments(int argc)
{
	printf("%d\n", argc - 1);
}
