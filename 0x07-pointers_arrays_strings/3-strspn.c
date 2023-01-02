#include "main.h"

/**
 * _strspn - gets the length of prefix substring only having a certain bytes
 * @s: a string
 * @accept: an input string
 * Returns: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;
	char *ptr = accept;

	while(*s)
	{
		i = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				i = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = ptr;
		if (i == 1)
			j++;
		else
			return (j);
	}

	return (j);
}
