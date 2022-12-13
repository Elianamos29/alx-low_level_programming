#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: void
 */

int main(void)
{
	long int firstn, secondn, thirdn, i;

	firstn = 1;
	secondn = 2;
	printf("%ld, ", firstn);
	printf("%ld, ", secondn);
	for (i = 3; i < 50; i++)
	{
		printf("%ld ,", thirdn);
		firstn = secondn;
		secondn = thirdn;
		thirdn = firstn + secondn;
	}
	printf("%ld\n", thirdn);
	return (0);
}
