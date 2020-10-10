#include <stdio.h>
#include "holberton.h"

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
		first = _atoi(argv[1]);
		second = _atoi(argv[2]);
		printf("%d\n", first * second);
		printf("%d\n", argc);
	}
	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string passed to function from main
 * Return: the value of int
 */

int _atoi(char *s)
{
	int num, i, sign = 1;

	for (i = 0; (s[i] < '0' || s[i] > '9') && s[i] != '\0'; i++)
		sign = (s[i] == '-') ? -1 : 1;
	for (num = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		num = 10 * num + (s[i] - '0');
	return (sign * num);
}

