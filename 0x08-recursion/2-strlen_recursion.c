#include "main.h"

/**
 * _strlen_recursion - shall retrieve string's length
 * @s: input string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
