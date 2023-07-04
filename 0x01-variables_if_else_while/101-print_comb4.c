#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits.
 * Return: 0 always
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && j != k && k < j && j < i)
				{
					putchar('0' + k);
					putchar('0' + j);
					putchar('0' + i);
					if (i + j + k != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
