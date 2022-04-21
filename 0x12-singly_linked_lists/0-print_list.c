#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print node
 *@h: nodes that printed
 * Return: nb nodes.
 *
 */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;
	list_t *nextN;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	count_nodes++;
	nextN = h->next;
	while (nextN != NULL)
	{
		if (nextN->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%d] %s\n", nextN->len, nextN->str);
		count_nodes++;
		nextN = nextN->next;
	}
	return (count_nodes);
}


