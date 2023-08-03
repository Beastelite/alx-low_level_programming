#include "main.h"

/**
 * binary_to_uint - function that changes a no. to
 * unsigned int form from its current
 * @b: this is tha string where the binary no.
 * is housed
 * Return: will bring back the no. that has  had its state
 * changed to binary state
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

