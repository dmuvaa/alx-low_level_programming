#include "main.h"

/**
 * _pow_recursion - power function
 * @x: the base integer
 * @y: the power integer
 * Return: -1 if y is lesser than 0 and 1 if y is zero
 */

int _pow_recursion(int x, int y)
{
	int x >= 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return _pow_recursion(x ^ y);
}
