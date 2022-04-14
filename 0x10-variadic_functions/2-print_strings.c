#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code
 *@separator: the character
 *@n: the parameter
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);

	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%s%s", va_arg(p, char*), separator);
		}
		printf("%s\n", va_arg(p, char*));
	}
	va_end(p);
}
