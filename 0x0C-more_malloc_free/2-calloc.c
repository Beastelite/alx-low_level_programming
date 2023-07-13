#include <stdlib.h>
#include "main.h"

/**
 * __memset - will fill with a fixed byte type the memory
 * @s: part filled
 * @b: chaaracter copied
 * @n: number of iterations of b
 *
 * Return: pointer to area s of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
		i++;

	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

