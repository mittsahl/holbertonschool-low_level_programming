#include "holberton.h"

/**
 * print_times_table - prints times table up to int n
 * Return: void
 * @n: int passed to function
 */

void print_times_table(int n)
{
	int columns;
	int rows;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				product = rows * columns;
				if (columns == 0)
					_putchar(columns + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product % 10 + '0');
					}
					else if (product >= 10 && product <= 99)
					{
						_putchar(' ');
						_putchar(product / 10 + '0');
						_putchar(product % 10 + '0');
					}
					else
					{
						_putchar(product / 100 + '0');
						_putchar((product / 10) % 10 + '0');
						_putchar(product % 10 + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
