#include "main.h"

/**
 * -strcpy copies string pointed to by src
 * @dest: copy to
 * @src: cp from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src [x];
	}
	dest[1] = '\0';
	return (dest);
}
