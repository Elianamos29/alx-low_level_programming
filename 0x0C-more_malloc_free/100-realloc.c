#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memor;
	char *pointer_cpy, *value;
	unsigned int inde;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memor = malloc(new_size);

		if (memor == NULL)
			return (NULL);

		return (memor);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer_cpy = ptr;
	memor = malloc(sizeof(*pointer_cpy) * new_size);

	if (memor == NULL)
	{
		free(ptr);
		return (NULL);
	}

	value = memor;

	for (inde = 0; inde < old_size && inde < new_size; inde++)
		value[inde] = *pointer_cpy++;

	free(ptr);
	return (memor);
}
