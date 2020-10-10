#include <stdio.h>

/**
 * main - prints all arguments followed by a newline
 * Return: 0 upon completion
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
