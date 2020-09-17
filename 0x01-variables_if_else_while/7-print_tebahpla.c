#include <stdio.h>

/**
 * main - prints the alphabet backwards
 * Return: 0 upon completion
 */

int main(void)
{
	int num;

	for (num = 'z'; num >= 'a'; num--)
		putchar(num);
	putchar('\n');
	return (0);
}
