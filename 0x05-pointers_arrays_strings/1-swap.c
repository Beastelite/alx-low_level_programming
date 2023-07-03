#include <stdio.h>

/**
 * swap _int - function to switch the values of two integers.
 * *a: First integer to swap.
 * *b: Second to b swapped.
 * Return: Success
 */
void swap_int(int *a, int *b)
{
	int speed = *a;
	*a = *b;
	*b = speed;
}
