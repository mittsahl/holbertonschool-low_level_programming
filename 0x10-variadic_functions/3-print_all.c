#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_comma - prints a comma  based off char from print_all
 * @c: char from print all
 * Return: void
 */

void print_comma(const char *c)
{
	if (*c == 'c' || *c == 'i' || *c == 'f' || *c == 's')
		printf(", ");
}

/**
* print_all - prints anything
* @format: format of the string
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *string;

	va_start(args, format);
	while (format && *(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				else
				{
					printf("%s", string);
					break;
				}
			default:
				i++;
				continue;
		}
		if (*(format + i + 1))
			print_comma((format + i));
		i++;
	}
	va_end(args);
	putchar('\n');
}

