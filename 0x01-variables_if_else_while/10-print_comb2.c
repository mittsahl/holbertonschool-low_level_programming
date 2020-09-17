#include <stdio.h>

/**
 * main - prints numbers 0-99 separated by commas
 * Return: 0 upon completion
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = 0; tens < 10; tens++)
	{
		for (ones = 0; ones < 10; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (ones != 9 || tens != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
