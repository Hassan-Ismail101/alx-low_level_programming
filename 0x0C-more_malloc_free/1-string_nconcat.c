#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concates bytes of the second string
 * to the first string and store it in pointer in heap
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of the second strign to used
 * Return: pointer to the conateded string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int itr1;
	unsigned int itr2;
	char *ptr;

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
	ptr = malloc(sizeof(char) * (itr1 + n + 1));
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
		itr2 = 0;
		while (*(s2 + itr2) != '\0' && itr2 < n)
			*(ptr + itr1++) = *(s2 + itr2++);
	}
	*(ptr + itr1) = '\0';
	return (ptr);
}
