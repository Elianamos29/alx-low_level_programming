#include <stdio.h>

/**
 * main - print single digit numbers using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
