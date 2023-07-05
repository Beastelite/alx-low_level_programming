#include "main.h"

/**
 * factorial -- retrieves a no.s factorial
 * @n: affiliated number to get factorial from
 * Return: n's factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
