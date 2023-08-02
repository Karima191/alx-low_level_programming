#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index of the list where the new node should be added.Index starts at 0
 * @n: element
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t)), *h;

	if (head == NULL || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	h = *head;
	while (h)
	{
		if (i == idx - 1)
		{
			new->next = h->next;
			h->next = new;
			return (new);
		}
		i++;
		h = h->next;
	}
	free(new);
	return (NULL);
}
