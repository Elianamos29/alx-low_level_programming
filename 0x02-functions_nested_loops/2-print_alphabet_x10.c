#include "main.h"

/**
 * print_alphabet_x10 - print lowercase 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
	}
}
