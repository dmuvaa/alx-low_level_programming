#include <string.h>
#include <stddarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: first parameter
 * Return: 0 if n is equal to 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(va_list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
