#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL, *y = NULL;

	while (*head != NULL)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}
	*head = x;
	return (*head);
}
