#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t
 *@head: the parameter
 * Return: void type.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		if (head->str != NULL)
			free(head->str);
	}
	else
	{
		free_list(head->next);
		free(head->str);
	}
	free(head);
}
