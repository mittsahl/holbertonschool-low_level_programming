#include <stdio.h>

/**
 * main - prints numbers 0 -9
 * Return: 0 upon completion
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
