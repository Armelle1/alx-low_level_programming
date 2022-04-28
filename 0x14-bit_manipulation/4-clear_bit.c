#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at a given index
 *@n: value
 *@index: the index
 * Return: 1 if it worked or -1 otherwise
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & (~(1 << (index)));
	if (*n)
		return (1);
	return (-1);

}


