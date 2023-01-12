#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array or null
 * If min > max or If malloc fails
 */


int *array_range(int min, int max)
{
	int *pt, i, Number;

	if (min > max)
		return (NULL);

	Number = (max - min) + 1;
	pt = malloc(Number * sizeof(int));

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < Number; i++)
	{
		pt[i] = min++;
	}

	return (pt);
}
