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

	if (argc < 4)
	{
		printf("Error\n");
		return (0);
	}
	func = get_op_func(av[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (0);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if ((num1 >= INT_MAX || num1 <= INT_MIN) || (num2 >= INT_MAX || num2 <= INT_MIN)) 
	{
		printf("Integer overflow\n");
		return (0);
	}
	printf("%d\n", func(num1, num2));
	return (0);
}

