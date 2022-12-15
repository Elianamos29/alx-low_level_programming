#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
