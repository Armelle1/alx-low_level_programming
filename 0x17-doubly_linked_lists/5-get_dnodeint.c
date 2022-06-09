#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 ** get_dnodeint_at_index - returns the nth node
 **@head: list
 **@index: index
 ** Return: the nth nodes
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n;

	current = head;
	n = 0;
	while (current != NULL)
	{
		if (n == index)
			break;
		current = current->next;
		n++;
	}
	if (n != index)
		return (NULL);
	return (current);
}
