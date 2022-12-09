#include <stdio.h>

/**
 * main - print combination of numbers 0 - 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, num2;

	for (num = 0; num <= 98; num++)
	{
		for (num2 = num + 1; num2 < 99; num2++)
		{
			putchar((num / 10) + '0');
			putchar((num % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if ((num == 98) && (num2 == 99))
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
