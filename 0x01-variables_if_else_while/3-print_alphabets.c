#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet, then the uppercase
 *              alphabet, followed by a new line, using the putchar function.
 *
 * Return: Always 0 (indicating successful completion)
 */
int main(void)
{

	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
