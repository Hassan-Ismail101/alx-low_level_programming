#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _realloc - re allocated memory
 * @ptr: the pointer of old memory
 * @old_size: the size of the old memory
 * @new_size: the size of the new memory
 * Return: pointer of the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int itr;
	void *newPtr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		if (new_size == 0)
			return (malloc(old_size));
		return (malloc(new_size));
	}
	if (old_size == new_size)
		return (ptr);
	newPtr = malloc(new_size);
	itr = 0;
	while (itr < old_size && itr < new_size)
	{
		*((char *)newPtr + itr) = *((char *)ptr + itr);
		itr++;
	}
	free(ptr);
	return (newPtr);
}
