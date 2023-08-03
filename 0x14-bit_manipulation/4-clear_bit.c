#include "main.h"

/**
 * clear_bit - initializes the value of a bit to nil(0)
 * @n: tha pointer for the no. subject to altercation
 * @index: indicator for the bit to be eliminated
 * Return: (1) definite success (Always), -1 for failed code piece
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

