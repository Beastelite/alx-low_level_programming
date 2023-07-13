#include "main.h"

/**
 * malloc_checked - memory allocator usin' malloc
 * @b: bytes allocated
 * Return: the allocated memory's pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);

}
