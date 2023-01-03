#include "main.h"

/**
 * memset- fills memory with constant bytes
 * @*s: first character to be filled
 * @b: second character
 * n: unsigned integer
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s;
	char b;
	unsigned int n;
	{
		memset(*s, b, n);
	}
}
