#include "main.h"

/**
 * get_endianness - looks into the machine and determines
 * if it's an enormous or tiny endian
 * Return: 0 definte big(Always), 1 tiny/little
 */
int get_endianness(void)
{
	unsigned int r = 1;
	char *c = (char *) &r;

	return (*c);
