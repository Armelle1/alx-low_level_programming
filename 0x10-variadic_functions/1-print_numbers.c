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

	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n - 1; ++i)
		{
			printf("%d%s", va_arg(p, int), separator);
		}
		printf("%d\n", va_arg(p, int));
	}
	va_end(p);
}
