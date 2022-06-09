#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 ** sum_dlistint - returns the sum of all data(n)
 **@head: list
 ** Return: the sum
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	unsigned int sum;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
