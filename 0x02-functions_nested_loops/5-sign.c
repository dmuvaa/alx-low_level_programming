#include "main.h"

/**
 * print_sign - prints the sign of a digit
 * @n: the variable being checked
 * Return: 1 and + if n > 0 and prints 0 if ==0 or -1 and prints - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
