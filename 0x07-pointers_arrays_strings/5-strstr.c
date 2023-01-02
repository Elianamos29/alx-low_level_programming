#include "main.h"

/**
 * _strstr - finds the first occurance of a substring in a string
 * @haystack: string
 * @needle: substring
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *hstack;
	char *ndl;

	while (*haystack != '\0')
	{
		hstack = haystack;
		ndl = needle;

		while (*haystack != '\0' && *ndl != '\0' && *haystack == *ndl)
		{
			haystack++;
			ndl++;
		}
		if (!*ndl)
			return (hstack);
		haystack = hstack + 1;
	}
	return (0);
}
