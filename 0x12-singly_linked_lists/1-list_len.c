#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - length of string
 * @h: list name
 * Return: node count
 */

size_t list_len(const list_t *h);
{
	int count = 0;

	while (h)
	{
		count++;
		h=h->next;
	}
	return (count);
}
