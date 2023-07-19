#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - funtion that uses a pointer to a function to
 * print the name
 * @name: character string
 * @f: pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

