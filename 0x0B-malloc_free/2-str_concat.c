#include "main.h"
#include <stdlib.h>

/**
 * str_concat - collects the input ends in order to
 * sum 'em up to determine size
 * @s1: 1st input
 * @s2: second input
 * Return: concatenates of both sting1 and string2
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int u, he;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	u = he = 0;
	while (s1[u] != '\0')
		u++;
	while (s2[he] != '\0')
		he++;
	concatenate = malloc(sizeof(char) * (u + he + 1));

	if (concatenate == NULL)
		return (NULL);
	u = he = 0;
	while (s1[u] != '\0')
	{
		concatenate[u] = s1[u];
		u++;
	}
	while (s2[he] != '\0')
	{
		concatenate[u] = s2[he];
		u++, he++;
	}
	concatenate[u] = '\0';
	return (concatenate);

}
