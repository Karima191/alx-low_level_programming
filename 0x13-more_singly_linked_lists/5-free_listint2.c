#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list
 * @head: head for listint_t list
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *r, *p;

	if (head != NULL)
	{
		r = *head;
		while ((p = r) != NULL)
		{
			r = r->next;
			free(p);
		}
		*head = NULL;
	}
}
