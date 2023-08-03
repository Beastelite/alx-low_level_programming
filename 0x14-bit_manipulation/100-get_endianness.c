#include "main.h"

/**
 * get_endianness - Looks into machine and determines if
 * it's an enormous or minute endian
 * Return: 0 definite enormous(Success always
 * ), 1 tiny/little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

