#include <stdio.h>

/**
 * main - print hexadecimal base numbers in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
