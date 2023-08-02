#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_t *find_listint_loop - finds the loop in a linked list
 * @head: head
 * Return: the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head, *j = head;

	if (!head)
		return (NULL);
	while (i && j && j->next)
	{
		j = j->next->next;
		i = i->next;
		if (j == i)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (j);
		}
	}
	return (NULL);
}
