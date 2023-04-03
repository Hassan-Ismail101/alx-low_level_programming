#include "main.h"
/**
 * _memcpy - used to make a copy of @src to @dest
 * @dest: The pointer of the destination
 * @src: The pointer of the source string
 * @n: number of bytes
 * Return: the string @dest after replacing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	itr = 0;
	while (itr < n)
	{
		*(dest + itr) = *(src + itr);
		itr++;
	}
	return (dest);
}
