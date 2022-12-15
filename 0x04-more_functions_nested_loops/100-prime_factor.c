#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n;
	long int fact;
	long int i;

	n = 612852475143;
	fact = -1;

	while (n % 2 == 0)
	{
		fact = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			fact = i;
			n = n / i;
		}
	}

	if (n > 2)
		fact = n;

	printf("%ld\n", fact);

	return (0);
}
