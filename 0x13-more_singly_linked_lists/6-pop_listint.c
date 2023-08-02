#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head nodes of a linked listint_t list
 * @head: head of listint_t list
 * Return: n or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *new;

	if (!head || !*head)
		return (0);
	new = (*head)->next;
	node = (*head)->n;
	free(*head);
	*head = new;
	return (node);
}
