#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 *@head: the linked list
 *@index: the index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
		return (head);
	while (head->next != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	if (head != NULL)
		return (head);
	return (NULL);
}
