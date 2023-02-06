#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number, or zero, or b if its NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	i++;
	}

	i = 0;

	while (b[i] != '\0')
	{
		unsigned int temp = n;

		n = (n << 1) + (b[i] - '0');
		if (n < temp)
			return (0);
		i++;
	}
	return (n);
}
