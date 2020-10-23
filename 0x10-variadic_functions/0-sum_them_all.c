#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns sum of all its parameters
* @n: number of arguments
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	va_start(args, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

