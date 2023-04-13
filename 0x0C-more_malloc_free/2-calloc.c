#include "main.h"
#include <stdlib.h>
/**
 * _calloc - create a function memic the calloc
 * @nmemb: the number of memory
 * @size: the size of the memory
 * Return: pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int itr;
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	itr = 0;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (itr < size * nmemb)
		*((char *)ptr + itr++) = 0;
	return (ptr);
}
