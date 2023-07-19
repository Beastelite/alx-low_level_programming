#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each of the items contained in
 * an array's indexes on a new line
 * @array: array
 * @size: no. of elements printed
 * @action: pointer to print in regular or hexa.
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

