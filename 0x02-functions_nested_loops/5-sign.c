#include "main.h"

/**
 * print_sign - determine the sign of a number
 * @n: number input
 * Return: 1 fro positive, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
