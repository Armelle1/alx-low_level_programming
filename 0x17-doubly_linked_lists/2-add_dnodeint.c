#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 ** add_dnodeint- adds a new node at the beginning of a list
 **@head: head
 **@n: the value of the new node
 ** Return: the address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
	}
	*head = new;
	return (new);
}
