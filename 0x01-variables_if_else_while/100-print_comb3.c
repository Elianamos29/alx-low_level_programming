#include <stdio.h>

/**
 * main - print combination of single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, num2;

	for (num = 48; num < 57; num++)
	{
		for (num2 = num + 1; num2 < 58; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num == 56 && num2 == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
		
	putchar('\n');
	return (0);
}
