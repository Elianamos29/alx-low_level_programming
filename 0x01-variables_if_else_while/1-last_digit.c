#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Last digit of a number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
	printf("Last digit of %i is %i ", n, last_digit);

	if (last_digit > 5)
		printf("and is greater than 5");
	else if (last_digit == 0)
		printf("and is 0");
	else if (last_digit < 6 && last_digit != 0)
		printf("and is less than 6 and not zero\n");

	return (0);

}
