#include "main.h"

/**
 * main - print _putchar
 * Return: Always 0 (Success)
 */

int main(void) {

	int ch[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int x, size;

	size = sizeof(ch) / sizeof(int);
	for (x = 0; x < size; x++) {
		_putchar(ch[x]);
	}
	_putchar('\n');
	return (0);
}
