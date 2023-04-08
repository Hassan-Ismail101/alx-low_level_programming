#include "main.h"
/**
 * _memset - used to fullfill string @s with char @b
 * @s: The string to be edit
 * @b: The char to full with
 * @n: number of bytes
 *
 * Return: the string @s after replacing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	itr = 0;
	while (itr < n)
		*(s + itr++) = b;
	return (s);
}
