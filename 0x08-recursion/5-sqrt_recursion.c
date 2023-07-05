#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - feedback is the square root of the tied no.
 *  @n: tied no.
 *  Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - will self-repeat to get
 * tied no.s root
 * @n: tied no.
 * @i: repeater
 * Return: the resultant root of the tied no.
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
