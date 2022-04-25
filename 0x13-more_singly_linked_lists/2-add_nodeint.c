#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code
 *@head: the double pointer
 *@n: the parameter
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn = malloc(sizeof(*nn));

	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}
