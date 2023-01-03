#include "main.h"

/**
 * _memset- fills memory with constant bytes
 * @s: with the constant byte @b
 * @b: memory area pointer
 * @n: bytes to the memory area to be pointed by @s
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
