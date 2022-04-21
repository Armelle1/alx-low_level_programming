#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end
 *@head: the parameter
 *@str: the parameter
 * Return: the adress of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nextN;
	list_t *nn = malloc(sizeof(*nn));

	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	nn->len = strlen(str);
	nn->next = NULL;
	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}
	nextN = *head;
	while (nextN->next != NULL)
	{
		nextN = nextN->next;
	}
	nextN->next = nn;
	return (nn);
}
