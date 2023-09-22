#include <stdio.h>

/**
 * before_main - Function executed before the main function.
 *
 * Prior to calling the main function, this function is automatically executed
 * To the standard output, a message is printed.
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
