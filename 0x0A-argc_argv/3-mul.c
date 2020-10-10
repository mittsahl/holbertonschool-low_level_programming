#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints argv[1] * argv[2] to command line
 * Return: 0
 * @argc: number of arguments
 * @argv: array arguments
 */

int main(int argc, char **argv)
{
	int first;
	int second;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%d\n", first * second);
	}
	return (0);
}


