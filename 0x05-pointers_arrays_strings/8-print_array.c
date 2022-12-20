#include "main.h"

/**
 * print_array - Prints an array of integers
 * @a: String/variable to be checked
 * @n: Number of elements to be printed
 *Description: Print elements of an array of integers
 * Return : 0 is success
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
