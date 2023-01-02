#include "main.h"

/**
 * _strspn - gets the length of prefix substring only having a certain bytes
 * @s: a string
 * @accept: an input string
 * Returns: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j = 0;
	char *ptr = accept;

	while(*s)
	{
		i = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				j++;
				i = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = ptr;
		if (i == 0)
			break;
	}

	return (j);
}
