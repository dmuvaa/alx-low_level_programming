#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: head of the list
 *
 * Return: no return
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
