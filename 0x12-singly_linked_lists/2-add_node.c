#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a new node
 *@head: the parameter
 *@str: the parameter
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn = malloc(sizeof(*nn));

	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	nn->len = strlen(str);
	nn->next = *head;
	*head = nn;
	return (nn);
}
