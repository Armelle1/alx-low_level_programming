#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h:the parameter
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t count_node;
	listint_t *nextN;

	count_node = 0;

	if (h == NULL)
		return (0);
	count_node++;
	nextN = h->next;
	while (nextN != NULL)
	{
		nextN = nextN->next;
		count_node++;
	}
	return (count_node);
}
