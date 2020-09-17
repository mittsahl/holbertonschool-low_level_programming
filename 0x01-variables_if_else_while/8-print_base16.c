#include <stdio.h>

/**
 * main - prints all numbers in base16
 * Return: 0 upon completion
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
