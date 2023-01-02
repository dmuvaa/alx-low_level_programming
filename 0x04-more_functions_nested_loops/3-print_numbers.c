#include<stdio.h>
#include "main.h"

/**
 * print_numbers - Print numbers
 * @c: numbers to be printed
 * Return: void
 */

void print_numbers(void)
{
	char c;
	
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
