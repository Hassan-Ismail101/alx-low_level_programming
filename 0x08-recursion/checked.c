#include "main.h"
/**
 * wildcmp - compare between two string if they are similar or not
 * @s1: the first string
 * @s2: the second string
 * Return: true if the two strings are similar and false if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	return (1);
}
