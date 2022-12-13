#include <stdio.h>

/**
 * main - sum of multiples of 3 or 5 below 1024
 * Return: Always 0 for success
 */

int main(void)
{
	int x, sum;

	for (x = 1; x < 1024; x++)
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	printf("%d\n", sum);
	return (0);
}
