#include "main.h"

/**
 * _puts - print a string to a new line followed by a new line to stdout
 * @str: the string to check
 *
 *  Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
