#include "main.h"

/**
 * _strncat - append @src string to @dest
 * @dest: the string which will increased
 * @src: the string which will be appended
 * @n: the number of bytes which should be appended
 * Return: address of the new string after the append
 */

char *_strncat(char *dest, char *src, int n)
{
	int itr;
	int destLen;

	itr = 0;
	while (*(dest + itr) != '\0')
		itr++;
	destLen = itr;
	itr = 0;
	while (itr < n && *(src + itr) != '\0')
	{
		*(dest + itr + destLen) = *(src + itr);
		itr++;
	}
	*(dest + itr + destLen) = '\0';
	return (dest);
}
