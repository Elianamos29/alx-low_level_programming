#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, length, len;

	length = 0;
	len = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	len = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
