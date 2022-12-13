#include "main.h"

/**
 * _isalpha - checks if a charcter is alphabet
 * @n: the character in ASCII value
 * Return: 1 if alphabet 0 otherwise
 */

int _isalpha(int n)
{
	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}
