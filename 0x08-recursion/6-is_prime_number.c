#include "holberton.h"

/**
 * is_prime_number - passees n to function to check if prime
 * Return: check function
 * @n: nuber to check if it is prime
 */

int is_prime_number(int n)
{
	int i = 2;

	return (check(n, i));
}

/**
 * check - checks to see if a number is prime
 * Return: 1 if prime else 0
 * @n: number we are checking
 * @i: number we are incrementing to check if n is prime
 */

int check(int n, int i)
{
	if (n <= 2)
		return (n == 2 ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (check(n, i + 1));
}
