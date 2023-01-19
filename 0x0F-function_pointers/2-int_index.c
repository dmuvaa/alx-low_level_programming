#include "function_pointers.h"

/**
 * int_index - function that searches for an integer and
 * returns the index of the first element
 * @size: number of elements in the array
 * @array: array of the pointer
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matches or -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
