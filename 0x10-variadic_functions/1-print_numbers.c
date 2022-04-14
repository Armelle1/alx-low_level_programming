#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - print a number
 *@separator:the parameter
 *@n: the parameter
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	va_start(p, n);

	if (separator != NULL)
	{
		for (i = n; i >= 0; i = va_arg(p, int))
		{
			printf("%d, %s", i, separator);
		}
			printf("\n");
	}
	va_end(p);
}
