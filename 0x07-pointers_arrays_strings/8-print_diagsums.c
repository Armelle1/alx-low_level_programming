#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums- a function that prints c
 * @a:char* bytes
 * @size: int
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size ; j++)
		{
			if (i == j)
			{
				sum = sum + *(a + i * size + j);
				break;
			}
		}
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if ((i + j) == size - 1)
			{
				sum = sum + *(a + i * size + j);
				break;
			}
		}
	}
	printf("%d\n", sum);

}
