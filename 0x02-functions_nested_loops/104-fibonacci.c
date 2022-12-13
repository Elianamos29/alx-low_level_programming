#include <stdio.h>

/**
 * main - prints sum of first 98 fibonacci numbers
 * Return: void
 */

int main(void)
{
	unsigned long int firstn, f1, f2, secondn, s1, s2, thirdn, t1, t2, i, j;

	firstn = 1;
	secondn = 2;
	thirdn = firstn + secondn;
	printf("%lu, ", firstn);
	printf("%lu, ", secondn);

	for (i = 3; i <= 88; i++)
	{
		printf("%lu, ", thirdn);
		firstn = secondn;
		secondn = thirdn;
		thirdn = firstn + secondn;
	}
	s1 = secondn / 1000000000;
	s2 = secondn % 1000000000;
	t1 = thirdn / 1000000000;
	t2 = thirdn % 1000000000;

	for (j = 89; j < 98; j++)
	{
		printf("%lu%lu, ", t1, t2);
		f1 = s1;
		f2 = s2;
		s1 = t1;
		s2 = t2;
		t1 = s1 + f1 + ((f2 + s2) / 1000000000);
		t2 = (f2 + s2) % 1000000000;
	}

	printf("%lu%lu\n", t1, t2);
	return (0);
}
