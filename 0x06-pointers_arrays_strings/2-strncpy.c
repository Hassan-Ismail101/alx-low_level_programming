#include "main.h"

/**
 * _strncpy - copy @n bytes from @src string to @dest
 * @dest: the string which will increased
 * @src: the source string
 * @n: the number of bytes which should be copied
 * Return: address of the new string after coping
 */

char *_strncpy(char *dest, char *src, int n)
{
	if (n > 0)
	{
		int itr;

		itr = 0;
		while (itr < n)
		{
			*(dest + itr) = *(src + itr);
			itr++;
		}
	}
	return (dest);
}
