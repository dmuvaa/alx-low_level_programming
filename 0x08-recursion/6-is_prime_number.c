#include "main.h"

/**
 * is_prime_number - checks if input integer is a prime number
 * n: input integer to be checked
 * Return: 1 if n is prime number and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n % 2 != 0 && n % 3 != 0)
		return (1);
	else
		return (0);
}
