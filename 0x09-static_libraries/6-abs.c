#include "main.h"

/**
 * _abs - computes the absolute number of an integer
 *@c: variable being checked
 * Return : the absolute value of the integer argument
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
