#include "main.h"

/**
 * _strncat - concatenates two strings
 *  using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int x;
	int v;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	v = 0;
	while (v < n && src[v] != '\0')
	{
		dest[x] = src[v];
		x++;
		v++;
	}
	dest[x] = '\0';
	return (dest);
}

