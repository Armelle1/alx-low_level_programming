#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all data
 *@head: the linked list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = head->n;
	while (head->next != NULL)
	{
		head = head->next;
		sum = sum + head->n;
	}
	return (sum);
}
