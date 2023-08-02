#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head of a listint_t list
 * @index: index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *n;

	for (n = head, i = 0 ; n && i < index ; n = n->next, i++)
		;

	return (n);
}
