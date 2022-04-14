#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - sum all parameters
 *@n: the parameter
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int result = 0;

	va_start(p, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0 ; i < n; ++i)
	{
		result = result + va_arg(p, int);
	}
	va_end(p);
	return (result);
}
