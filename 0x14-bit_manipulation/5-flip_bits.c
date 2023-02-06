#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: one of the numbers
 * @m: one of the numbers
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = n ^ m;

	int count = 0;

	while (a)
	{
		count += a & 1;
		a >>= 1;
	}
	return (count);
}
