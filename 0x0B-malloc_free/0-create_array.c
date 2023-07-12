#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes an array
 * @size: - array's magnitude
 * @c: char to assign
 * Return: NULL for failure
 */
char *create_array(unsigned int size, char c);
{
	char *str
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);


}
