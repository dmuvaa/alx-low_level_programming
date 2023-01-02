#include<stdio.h>
#include "main.h"

/**
 * print_numbers - Print numbers
 * @a: numbers to be printed
 * Return: Always 0
 */

void print_numbers(void)
{
	int a;
	
	for (a = 0; a < 9; a++)
	{
		_putchar(a);
	}
	_putchar("\n");
	return (0);
}
