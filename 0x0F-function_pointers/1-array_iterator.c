#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @size: size of the array
 * @action: pointer to the function to use
 * @array: array of the pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
