#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (j != i && j < i)
			{
				putchar ('0' + j);
				putchar ('0' + i);
				if (i + j != 17)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
