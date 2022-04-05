#include "main.h"
#include "stdlib.h"
/**
 * create_array- prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;
	a = malloc

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size ; i++)
	{
		a[i] = c;
	}
	return (a);
}
