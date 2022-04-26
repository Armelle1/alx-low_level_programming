#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 *@head: the parameter
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
