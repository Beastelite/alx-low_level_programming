#include "main.h"

/**
 * _strpbrk - func. that searches for str for
 * any set of bytes
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
		s++;
	}
	return ('\0');
}
