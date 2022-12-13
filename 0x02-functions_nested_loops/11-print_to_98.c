#include <stdio.h>

/**
 * print_to_98 - print natural numbers n - 98
 * @n: number inputed
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
