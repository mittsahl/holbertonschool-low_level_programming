#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - print strings to stdout
* @separator:  separator of each string
* @n: number of arguments
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator != NULL)
			printf("%s%s", va_arg(args, char *), separator);
		else
			printf("%s\n", va_arg(args, char *));
	}
}

