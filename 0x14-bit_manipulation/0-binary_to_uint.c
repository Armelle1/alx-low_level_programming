#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * pow_func - calculate pow
 *@base: 1st parameter
 *@pow: 2nd parameter
 * Return: the resulr
 */

int pow_func(int base, int pow)
{
	int result = 1;

	while (pow-- > 0)
	{
		result = result * base;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number
 *@b: string of bits
 * Return: the converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i, pow, length = 0, result = 0;
	char c = '0';

	if (b == NULL)
		return (0);
	while (c != '\0')
	{
		c = *(b + length++);
	}
	length--;
	for (i = 0, pow = length - 1; i < length; i++, pow--)
	{
		c = *(b + i);
		if (c == '0' || c == '1')
			result += (c - '0') * pow_func(2, pow);
		else
			return (0);
	}
	return (result);
}


