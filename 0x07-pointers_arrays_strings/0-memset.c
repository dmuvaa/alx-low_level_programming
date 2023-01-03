#include "main.h"

/**
 * memset- fills memory with constant bytes
 * @*s: first character to be filled
 * @b: second character
 * n: unsigned integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while(i < n)

	{
		s[i] = b;
		i++;
	}

	return (s);
}
