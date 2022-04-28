#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of bit at a given index
 *@n: value
 *@index: the index
 * Return: the value of the bit at index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index == 0)
		return (0);
	if (!n)
		return (-1);
	if (index == 0)
	{
		if (n & 1)
			return (1);
		return (0);
	}
	else
		return (get_bit(n >> 1, index - 1));

}


