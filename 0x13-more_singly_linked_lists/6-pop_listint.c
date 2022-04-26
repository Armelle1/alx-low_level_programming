#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node and returns the head node's data
 *@head : linked list
 * Return: node's data
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *headNode;

	if (head == NULL || *head == NULL)
		return (0);
	value = (*head)->n;
	headNode = *head;
	*head = (*head)->next;
	free(headNode);
	return (value);
}
