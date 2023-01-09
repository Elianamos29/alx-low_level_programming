#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory with
 *  a duplicate of the strung passed to it
 *  @str: pointer to the memory location
 *  Return: a pointer or Null if failed
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[len] = '\0';

	return (s);
}
