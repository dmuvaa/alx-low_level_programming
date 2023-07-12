#include "search_algos.h"

/**
 * print_array - prints array or subarray being searched
 * @array: pointer to the first element of the array
 * @left: left boundary of sub-array
 * @right: right boundary of sub-array
 * Return: void
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @size: number of elements in array
 * Return: -1 if the array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
