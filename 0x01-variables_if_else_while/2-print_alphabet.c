#include <stdio.h>

/**
 * main - prints the alphabet followed by new line
 * Return: 0 upon completion
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter < 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
