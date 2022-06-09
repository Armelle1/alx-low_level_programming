#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: list
 *@idx: index
 *@n: the value of new node
 *Return: the addess of the new node or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int index;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	current = *h;
	index = 0;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	while (current != NULL)
	{
		if (index == idx)
			break;
		current = current->next;
		index++;
	}
	if (index != idx)
		return (NULL);
		new->next = current;
		new->prev = current->prev;
		current->prev->next = new;
		current->prev = new;
	}
	return (new);
}
