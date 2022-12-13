#include "main.h"

/**
 * print_times_table - printes n times table
 * @n: number of times table
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, o;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				o = x * y;
				_putchar(44);
				_putchar(32);
				if (o <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(o + 48);
				}
				else if (o <= 99)
				{
					_putchar(32);
					_putchar((o / 10) + 48);
					_putchar((o % 10) + 48);
				}
				else
				{
					_putchar(((o / 100) % 10) + 48);
					_putchar(((o / 10) % 10) + 48);
					_putchar((o % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
