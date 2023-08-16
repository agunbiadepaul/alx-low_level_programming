#include <stdio.h>

/**
 * Description: print_to_98 - Prints all natural
 * numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}

int main(void)
{
	print_to_98(10);
	print_to_98(98);
	print_to_98(0);
	print_to_98(-10);
	return (0);
}
