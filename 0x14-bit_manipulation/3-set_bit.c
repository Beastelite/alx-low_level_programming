#include "main.h"

/**
 * set_bit - to_1 a bit at a given index is set
 * @n: this is a variable that holds the address to another
 * (pointer) to the no . to be altered
 * @index: index of the bit to set to 1
 * Return: 1 definite succes (Always), -1 meaning failed code
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

