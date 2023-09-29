#include "main.h"

/**
 * get_endianness - Checks the endianness in the system
 *
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (*byte != 0);
}
