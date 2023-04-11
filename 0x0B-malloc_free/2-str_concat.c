#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates string @s1 and @s2 and return\
 * the result in array
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int itr1;
	int itr2;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	itr1 = 0;
	if (s1 == NULL)
		itr1 = 0;
	else
	{
		while (*(s1 + itr1) != '\0')
			itr1++;
	}
	itr2 = 0;
	if (s2 == NULL)
		itr2 = 0;
	else
	{
		while (*(s2 + itr2) != '\0')
			itr2++;
	}
	ptr = malloc(sizeof(char) * (itr1 + itr2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (itr1)
	{
		itr1 = 0;
		while (*s1 != '\0')
			*(ptr + itr1++) = *(s1++);
	}
	if (itr2)
	{
		while (*s2 != '\0')
			*(ptr + itr1++) = *(s2++);
	}
	*(ptr + itr1) = '\0';
	return (ptr);
}
