#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random number and tells if - or +
 * Return: 0 upon completion
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
