#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: String whose length's to be obtained
 * Return: Length of str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
