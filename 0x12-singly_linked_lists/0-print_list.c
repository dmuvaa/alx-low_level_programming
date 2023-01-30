#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

struct list_t{
	int n;
	struct list_t *next;
}list_t;

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	printf("[");
	while (current != NULL)
	{
		if (current->next != NULL)
			printf("%d, ", current->n);
		else
			printf("%d", current->n);
		current = current->next;
		count++;
	}
	printf("]\n");
	
	return count;
}
