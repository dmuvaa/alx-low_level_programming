#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - function that searches for a value in an array
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: -1 if value is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/*check if array is NULL*/
	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

	}
	return (-1);
}
