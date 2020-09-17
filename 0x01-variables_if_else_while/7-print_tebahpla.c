#include <stdio.h>

int main (void)
{
	int num;

	for (num = 'z'; num >= 'a'; num--)
		putchar(num);
	putchar('\n');
	return (0);
}
