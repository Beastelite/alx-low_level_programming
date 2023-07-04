#include <stdio.h>
/**
 * main - prints all possible combinationstwo-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;
	
	i = 0;
	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
			{
				putchar((i / 10) +48);
				putchar((i % 10) +48);
				putchar(' ');
				putchar((j / 10) +48);
				putchar((j % 10) +48);
				if (i != 98 || j != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
