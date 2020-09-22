#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - prints all times in day in military time
 * Return: void
 */

void jack_bauer(void)
{
	int minutes;
	int hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
