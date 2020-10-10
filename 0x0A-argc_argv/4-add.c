#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of argv array
 * Return: 0 if completed else 1
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
