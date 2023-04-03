#include "main.h"
/**
 * _strchr - return the first occurrence of the char @c
 * @s: the string to search in
 * @c: the char to search for
 * Return: the pointer to the first occurrence of the @c in the s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
