#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1[] = "12345";
	char str2[] = "-678";
	char str3[] = "+42";
	char str4[] = "hello";

	printf("Converted value of str1: %d\n", _atoi(str1));
	printf("Converted value of str2: %d\n", _atoi(str2));
	printf("Converted value of str3: %d\n", _atoi(str3));
	printf("Converted value of str4: %d\n", _atoi(str4));
	return (0);
}
