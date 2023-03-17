#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds anew node at the beginning of the list
 * @head: pointer to head of the list
 * @n: integer value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *h;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	h = *head;

	if (head != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	newnode->next = h;

	if (h != NULL)
	{
		h->prev = newnode;
	}
	*head = newnode;

	return (newnode);
}
