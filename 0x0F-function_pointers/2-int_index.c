#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 *@cmp: the parametr
 *@size: th parameter
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int k;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			k = (*cmp)(array[i]);
			if (k != 0)
				return (i);
		}
	}
	return (-1);
}

