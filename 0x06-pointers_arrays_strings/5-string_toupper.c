#include "main.h"

/**
 * char: lowercase letters of a string to uppercase
 * @char: input letters
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *)
{
	int g

	g = 0;
	while (n[g]!= '\0')
	{
		if (n[g] >= 'a' && n[g] <= 'z')
			n[g] = n[g] - 32;
		g++;
	}
	return (n);
}

