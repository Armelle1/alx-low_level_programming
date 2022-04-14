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
	char *value;

	va_start(p, n);

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			value = va_arg(p, char*);
			if (value == NULL)
				value = "(nil)";
			if (separator == NULL)
				printf("%s", value);
			else
				printf("%s%s", value, separator);
		}
		value = va_arg(p, char*);
		if (value == NULL)
			value = "(nil)";
		printf("%s", value);
	}
	printf("\n");
	va_end(p);
}
