#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 *@head: the parameter
 *@n: the parameter
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nextN;
	listint_t *nn = malloc(sizeof(*nn));

	if (nn == NULL)
		return (NULL);
	nn->n = n;
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
