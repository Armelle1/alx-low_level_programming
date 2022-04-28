#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of bit at a given index
 *@n: value
 *@index: the index
 * Return: 1 if it worked or -1 otherwise
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n | (1 << (index)));
	if (*n)
		return (1);
	return (-1);

}


