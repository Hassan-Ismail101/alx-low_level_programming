#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy @n bytes from @src string to @dest
 * @dest: the string which will increased
 * @src: the source string
 * @n: the number of bytes which should be copied
 * Return: address of the new string after coping
 */

char *_strncpy(char *dest, char *src, int n)
{
	int itr;
	int flag = 0;

	itr = 0;
	while (itr < n)
	{
		if (*(src + itr) != '\0' && flag == 0)
		{
			*(dest + itr) = *(src + itr);
		}
		else
		{
			*(dest + itr) = 0;
			flag = 1;
		}
		itr++;
	}
	return (dest);
}
