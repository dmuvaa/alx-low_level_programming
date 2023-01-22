#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print a char
 * @c: character to print
 * Return: vid
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 * Return: void
 */

void print_s(va_list s)
{
	printf("%s", var_arg(s, char*));
}

/**
 * print_f - prints a float variable
 * @f: float to be printed
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", var_arg(f, float));
}

/**
 * print_i - prints an integer
 * @i: integer to print
 * Return: void
 */

void print_i(va_list i)
{
	printf("%i", var_arg(i, int));
}

/**
 * print_all - function that prints anything
 * @format: list of argument types passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
