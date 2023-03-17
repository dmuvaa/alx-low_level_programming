#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds anew node at the beginning of the list
 * @dlistint_t - pointer  node
 * @head: pointer to hea
 * @n: new node
 *
 * return: the address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t*)malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	if (head != NULL)
	{
		while (head != NULL)
		{
			printf("%i ", newnode->n);
			newnode = newnode->next;
		}
		 printf("\n");
	}
	return(newnode);
}
