#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer
 * pointed to by dest
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: pointer to the string in the buffer
 */

char *_strcpy(char *dest, char *src)
{
	if (dest != 0 && src != 0)
	{
		int itr;

		itr = 0;
		while (*(src + itr) != '\0')
		{
			*(dest + itr) = *(src + itr);
			itr++;
		}
		*(dest + itr) = '\0';
		return (dest);
	}
	else
		return (0);
}
