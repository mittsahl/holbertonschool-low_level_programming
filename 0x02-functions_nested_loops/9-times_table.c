#include <stdio.h>
#include "holberton.h"

/**
 * times_table - prints a times table
 * Return: void
 */

void times_table(void)
{
	int columns;
	int rows;
	int product;

	for (rows = 0; rows < 10; rows++)
	{
		for (columns = 0; columns < 10; columns++)
		{
			product = rows * columns;
			if (columns == 0)
				_putchar(columns + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product > 9)
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(product + '0');
				}
			}
		}
		_putchar('\n');
	}
}
