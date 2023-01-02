#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - prints the sum of two diagonals of a square matrix
 * @a: input
 * @size: size of matrix
 * Return: void
 */
void print_diagsum(int *a, int size)
{
	int i = 0;
	int value = 0;
	int sum, sum2;

	sum = sum2 = 0;
	while (i < (size * size))
	{
		value = *(a + i);
		sum = sum + value;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		value = *(a + i);
		sum2 = sum2 + value;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
