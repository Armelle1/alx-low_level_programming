#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator- prints an integer
 * @array: the integer to print
 * @size: the parameter
 *@action: the parameter
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action) (array[i]);
		}
	}
}
