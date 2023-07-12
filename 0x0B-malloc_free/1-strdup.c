#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - will make another of a kind  elsewhere in memory
 *@str: character
 *Return: 0 (always success)
 */
char *_strdup(char *str)

{
	char *aaa;
	int f, g = 0;

	if (str == NULL)
		return (NULL);
	f = 0;
	while (str[f] != '\0')
		f++;

	aaa = malloc(sizeof(char) * (f + 1));

	if (aaa == NULL)
		return (NULL);

	for (g = 0; str[g]; g++)
		aaa[g] = str[g];

	return (aaa);
}
