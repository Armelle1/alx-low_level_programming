#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of nodes
 *@h: nodes list
 * Return: nb nodes.
 *
 */
size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;
	list_t *nextN = h->next;

	if (h == NULL)
		return (0);
	count_nodes++;
	while (nextN != NULL)
	{
		count_nodes++;
		nextN = nextN->next;
	}
	return (count_nodes);
}


