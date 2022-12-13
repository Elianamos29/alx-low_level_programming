#include <stdio.h>

/**
 * main - prints libber abacci
 * Return: void
 */

int main(void)
{
	unsigned int firstn, secondn, thirdn, sum, i;

	firstn = 1;
	secondn = 2;
	thirdn = 3;
	sum = 2;
	for (i = 2; i <= 32; i++)
	{
		if (thirdn % 2 == 0)
			sum += thirdn;
		firstn = secondn;
		secondn = thirdn;
		thirdn = firstn + secondn;
	}
	printf("%u\n", sum);
	return (0);
}
