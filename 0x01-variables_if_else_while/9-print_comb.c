#include <stdio.h>

/**
 * main - prints out numbers 1-9 separated by commas
 * Return: 0 upon completion
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
