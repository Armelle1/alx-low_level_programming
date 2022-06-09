#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: list
 *@index: index
 *Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx;

	current = *head;
	idx = 0;
	if (*head == NULL && index == 0)
		return (1);
	while (current != NULL)
	{
		if (index == idx)
			break;
		current = current->next;
		idx++;
	}
	if (index != idx)
		return (-1);
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;
	free(current);
	current = NULL;
	return (1);
}
