#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * Return: 0 on success
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
	putchar('\n');
	return (0);
}
