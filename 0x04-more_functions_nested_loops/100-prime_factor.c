#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - Function that finds & prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n;
	unsigned long div;
	unsigned long largest;

	n = 612852475143;
	largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;  /* to get an odd value of n */
	}
	for (div = 3; div <= sqrt(n); div += 2)
	{
		while (n % div == 0)
		{
			largest = div;
			n = n / div;
		}
	}
	if (n > 2)
		largest = n;

	printf("%ld\n", largest);

	return (0);
}

