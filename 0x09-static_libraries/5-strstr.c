#include "main.h"
#include <stddef.h>
/**
 * _strstr - find the first occurrence of
 * \substring @needle and return the address
 * @haystack: The string
 * @needle: the substring
 * Return: the substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int itra;
	unsigned int itr;
	unsigned int flag;

	itr = 0;
	while (*(haystack + itr) != '\0')
	{
		itra = 0;
		flag = 1;
		while (*(needle + itra) != '\0')
		{
			if (*(haystack + itr + itra) != *(needle + itra))
			{
				flag = 0;
				break;
			}
			itra++;
		}
		if (flag)
			return (haystack + itr);
		itr++;
	}
	return (NULL);
}
