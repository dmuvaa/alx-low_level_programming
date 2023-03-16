#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @dlistint_t - head node
 * @h: pointer to head node of the list
 *
 * Return: The number of nodes
 *
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
