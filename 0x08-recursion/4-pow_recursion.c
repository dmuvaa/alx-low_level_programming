#include "main.h"

/**
 * _pow_recursion - power function
 * @x: the base integer
 * @y: the power integer
 * Return: -1 if y is lesser than 0 and 1 if y is zero
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
