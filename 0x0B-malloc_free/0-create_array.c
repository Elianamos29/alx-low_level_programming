#include "main.h"

/**
 * create_array - creates an array of a given size and assigns char
 * @size: size of the array
 * @c: char to be assigned
 * Return: pointer to an array or null if failed
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int ui;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
