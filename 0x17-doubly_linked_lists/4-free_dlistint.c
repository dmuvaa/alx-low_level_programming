#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head - pointer to the next node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
