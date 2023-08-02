#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of a listint_t list
 * @n: element
 * Return: the address of the new element, or NULL if the function fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *ed;

	malloc(sizeof(listint_t));


	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
		*head = nw
			;
	else
	{
		while (ed->next != NULL)
			ed = ed->next;
		ed->next = nw;
	}
	return (*head);
}
