#include "main.h"
/**
 * _memset - used to fullfill string @s with char @b
 * @b: The char to full with
 * @n: number of bytes
 * return: the string after replacing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	itr = 0;
	while (itr < n)
		*(s + itr++) = b;
	return (s);
}
