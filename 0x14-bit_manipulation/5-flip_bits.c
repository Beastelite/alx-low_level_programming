#include "main.h"

/**
 * flip_bits - function that determines thee no. of tha
 * bit in need of altercation in order to
 * reach the desired no.
 * @n: the 1_no.
 * @m: the 2_no.
 * Return: tha no. of bits enumerated
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		current = exclusive >> t;
		if (current & 1)
			count++;
	}

	return (count);
}

