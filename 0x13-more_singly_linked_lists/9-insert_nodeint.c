#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *@head: the linked list
 *@idx: the index 
 *@n: the value of the node
 * Return: the nth node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *newNode = malloc(sizeof(*node));

	if (newNode == NULL || head == NULL || *head == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if(idx == 0)
	{
		newNode = (*head)->next;
		*head = newNode;
		return (newNode);
	}
	node = *head;
	idx--;
	while (node->next != NULL && idx > 0)
	{
		node = node->next;
		idx--;
	}
	if (node != NULL)
	{
		newNode = node;
		node = newNode;
		return (newNode);
	}
	return (NULL);
}
