#include "main.h"

/**
 * _strcat - append @src string to @dest
 * @dest: the string which will increased
 * @src: the string which will be appended
 * Return: address of the new string after the append
 */

char *_strcat(char *dest, char *src)
{
	int itr;
	int destLen;

	itr = 0;
	while (*(dest + itr) != '\0')
		itr++;
	destLen = itr;
	itr = 0;
	while (*(src + itr) != '\0')
	{
		*(dest + itr + destLen) = *(src + itr);
		itr++;
	}
	*(dest + itr + destLen) = '\0';
	return (dest);
}
