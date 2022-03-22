#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the second half of the string
 *@a: first parameter;
 *@n: second parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n - 1 ; i++)
	{
		printf("%d, ", *(a + i));
	}
	if (i > 0)
		printf("%d\n", *(a + i));
}
