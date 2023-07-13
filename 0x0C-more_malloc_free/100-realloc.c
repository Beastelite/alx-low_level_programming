#include <stdlib.h>
#include "main.h"

/**
 * _realloc - using malloc and free it will reassign
 * memory space
 * @ptr: you see, memory previously allocated by
 * malloc,this's the its pointer
 * @old_size: size of ptr's allocated memory
 * @new_size: new memory block's size *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (p = 0; p < new_size; p++)
			ptr1[p] = old_ptr[p];
	}

	if (new_size > old_size)
	{
		for (p = 0; p < old_size; p++)
			ptr1[p] = old_ptr[p];
	}

	free(ptr);
	return (ptr1);
}

