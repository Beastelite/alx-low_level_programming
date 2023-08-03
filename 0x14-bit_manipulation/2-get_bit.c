#include "main.h"

/**
 * get_bit - bring back a bit's value at a certain
 * for a base_10 no.
 * @n: the new no. in binary
 * @index: the bit's relevant index
 * Return: correct bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

