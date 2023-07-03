#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of
 * integers, followed by a new line
 * @a:name of de array
 * @n: number of the indexes
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1);  i++)
	{
	printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
