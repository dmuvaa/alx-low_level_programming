include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 * @c: characters to print
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
