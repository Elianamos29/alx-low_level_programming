#include "main.h"

/**
 * times_table - prints the times table
 * Return: nothing
 */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			l = k / 10;
			m = k % 10;

			if (j == 0)
				_putchar('0');
			else if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + l);
				_putchar('0' + m);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');

}
