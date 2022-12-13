#include "main.h"

/**
 * _islower - checks lowercase
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int n)
{
	if (n >= 97 && n <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
