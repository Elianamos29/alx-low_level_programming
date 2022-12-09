#include <stdio.h>

/**
 * main - print combination of numbers 0 - 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, num2, num3;

	for (num = 48; num < 58; num++)
	{
		for (num2 = num; num2 < 57; num2++)
		{
			for (num3 = num2; num3 < 58; num3++)
			{
				for (num4 = num3 + 1; num4 < 58; num4++)
				{
					putchar(num);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (num == 57 && num2 == 56 && num3 == 57 && num4 == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
