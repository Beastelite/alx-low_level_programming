#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * Return: 0 on success
 */
int main (void)
{
	int c;
	
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
