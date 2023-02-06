#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: an unsigned long int representing a number
 * @index: an unsigned int representing the position of a bit within the number
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index) & 1;
}
