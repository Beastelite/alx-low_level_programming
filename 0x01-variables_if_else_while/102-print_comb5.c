#include <stdio.h>
/**
 * main - prints all possible combinationstwo-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	int f_num, l_num, j = 0;
	int f_num2, l_num2;

	while (i <= 98)
	{
		f_num = (i / 10 + '0');
		l_num = (i % 10 + '0');
		j = 0;
		while (j <= 99)
		{
			f_num2 = (i / 10 + '0');
			l_num2 = (i % 10 + '0');
			if (i < j)
			{
				putchar(f_num);
				putchar(l_num);
				putchar(' ');
				putchar(f_num2);
				putchar(l_num2);
				if (i != 98)
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
