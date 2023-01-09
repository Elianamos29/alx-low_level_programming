#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: argument size
 * @av: a pointer to an array of arguments
 * Return: A pointer or NULL if fail
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *ptr;

	size = 0;
	i = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}

		size++;
		i++;
	}

	ptr = malloc((sizeof(char) * size) + 1);
	if(ptr == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}

		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';

	return (ptr);
}
