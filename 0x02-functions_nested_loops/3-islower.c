#include "main.h"

/**
 *_islower - Function to check for lowercase character
 *@c: The character to be checked
 * Return: 1 for lowercase and 0 if else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
