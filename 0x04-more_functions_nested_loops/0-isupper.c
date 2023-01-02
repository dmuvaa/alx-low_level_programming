#include<stdio.h>
#include "main.h"

/**
 * int _isupper - check uppercase character
 * @c: character to be checked
 * return: 1 if c is uppercase
 * return: 0 if otherwise
 */

int _isupper(int c)
{
	char c;

	for(c = 'A'; c <= 'Z'; c++)
	{

	if (_isupper(c))
	{
		_putchar('c');
		return(1);
	}
	else
		{
			_putchar('c');
			return(0);
		}
	}
}
