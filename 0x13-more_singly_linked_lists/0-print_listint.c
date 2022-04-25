#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements
 * @h:the parameter
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t count_node;
	listint_t *nextN;

	count_node = 0;

	if (h == NULL)
		return (0);
	else
	{
		printf("%d\n", h->n);
		printf("->%lu elements\n", count_node);
	}
	count_node++;
	nextN = h->next;
	while (nextN != NULL)
	{
		printf("%d\n", h->n);
		printf("->%lu elements\n", count_node);
		nextN = nextN->next;
	}
	return (count_node);
}
