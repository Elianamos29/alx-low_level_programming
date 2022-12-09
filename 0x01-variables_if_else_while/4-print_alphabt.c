#include <stdio.h>

/**
 * main - print hte alphabet in lowercase except e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'e' || lower == 'q')
			continue;
		putchar(lower);
	}

	putchar('\n');
	return (0);
}
