#include "main.h"

/**
 * @c is the character we are checking
 * check for alpha character
 * Return: 1 if c is a letter, lowercase, or uppercase
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
	if (c >= 91 && c <= 96)
	{
	return (0);
	}
	return (1);
	}
}
