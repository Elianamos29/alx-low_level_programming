#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number input
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (l_digit < 0)
	{
		_putchar(-l_digit + 48);
		return (-l_digit);
	}
	else
	{
		_putchar(l_digit + 48);
		return (l_digit);
	}
}
