#include <stdio.h>

/**
 * main - print combination of single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, num2, num3;

	for (num = 48; num < 56; num++)
	{
		for (num2 = num + 1; num2 < 57; num2++)
		{
			for (num3 = num2 + 1; num3 < 58; num3++)
			{
				putchar(num);
				putchar(num2);
				if (num == 55 && num2 == 56 && num3 == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
