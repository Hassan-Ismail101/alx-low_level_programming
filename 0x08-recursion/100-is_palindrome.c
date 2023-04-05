#include "main.h"
#include <stdio.h>
/**
 * string_length - get the length of @s string
 * @s: the string
 * Return: the length of a string @s
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}
/**
 * my_palidrome - check if the string is palindrome or not
 * @start: pointer to the start of the string
 * @end: pointer to the last of the string
 * Return: True if the string is palindrome and false if not
 */
int my_palidrome(char *start, char *end)
{
	if (*start == '\0')
		return (1);
	return ((*start == *end) && my_palidrome(start + 1, end - 1));
}
/**
 * is_palindrome - check if the string is palindrome or not
 * @s: The string to be checked
 * Return: True if the string is palindrome and false if not
 */
int is_palindrome(char *s)
{
	char *e;
	int len;

	len = string_length(s);
	e = s + len - 1;
	return (my_palidrome(s, e));
}
