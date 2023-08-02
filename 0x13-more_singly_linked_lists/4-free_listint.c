#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while ((p = head) != NULL)
	{
		head = head->next;
		free(p);
	}
}
