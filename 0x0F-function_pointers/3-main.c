#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "3-calc.h"

/**
* main - uses get op function
* @argc: number  of arguments
* @av:  array of arguments
* Return: 0
*/

int main(int argc, char **av)
{
	int num1;
	int num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(av[2]);
	if (func == NULL || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if ((*av[2] == '/' || *av[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(num1, num2));
	return (0);
}

