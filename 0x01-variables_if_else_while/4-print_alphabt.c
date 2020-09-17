#include <stdio.h>

/**
 * main - prints out alphabet except e and q
 * Return: 0 upon completion
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar ('\n');
	return (0);
}
