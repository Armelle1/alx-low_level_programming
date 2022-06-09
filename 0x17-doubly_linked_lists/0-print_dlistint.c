#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 ** print_distint - prints all the elements of a dlistint_t
 **@h: list
 ** Return: the number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
