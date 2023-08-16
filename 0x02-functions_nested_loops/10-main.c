#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, result;

	a = 10;
	b = 20;
	result = add(a, b);
	printf("%d + %d = %d\n", a, b, result);
	return (0);
}
