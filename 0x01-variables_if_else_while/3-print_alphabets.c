#include <stdio.h>

/**
 * main - print hte alphabet in lower case followed by uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
