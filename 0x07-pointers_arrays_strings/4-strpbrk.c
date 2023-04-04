#include "main.h"
/**
 * _strpbrk - find the substring after the first occurrence of @accept
 * @s: The string
 * @accept: the substring
 * Return: the substring
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int itra;
	unsigned int itr;

	itr = 0;
	while (*(s + itr) != '\0')
	{
		itra = 0;
		while (*(accept + itra) != '\0')
		{
			if (*(s + itr) == *(accept + itra))
			{
				return (s + itr);
			}
			itra++;
		}
		itr++;
	}
	return (NULL);
}
