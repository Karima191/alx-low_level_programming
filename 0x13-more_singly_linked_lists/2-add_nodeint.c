#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of a listint_t list
 * @n: element
 * Return: the address of the new element, or NULL if the function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
