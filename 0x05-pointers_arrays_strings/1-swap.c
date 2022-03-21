#include "main.h"
/**
 * swap_int - swap value.
 * @a: the pointers.
 * @b: the pointer.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
