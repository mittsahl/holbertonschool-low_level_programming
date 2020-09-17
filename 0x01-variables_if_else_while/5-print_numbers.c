#include <stdio.h>

/**
 * main - prints all base 10 numbers
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
