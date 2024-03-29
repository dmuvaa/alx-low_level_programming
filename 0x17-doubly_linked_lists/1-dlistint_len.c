#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 *
 * @h: head node in the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
