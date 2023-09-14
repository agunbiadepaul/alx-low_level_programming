#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/* Function to select the correct operation function */
/**
 * get_op_func - Selects the correct operation function based on operator
 * @s: The operator string
 *
 * Return: A pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
	;

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
