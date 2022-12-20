#include "main.h"
#include<stdio.h>

/**
 * print_array - Prints an array of integers
 * @a: String/variable to be checked
 * @n: Number of elements to be printed
 *Description: Print elements of an array of integers
 * Return : 0 is success
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)

	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
