#include "main.h"
/**
 * string_end - get the address of last letter in string
 * @s: the string
 * Return: the address of the last char
 */
char *string_end(char *s)
{
	if (*s == '\0')
		return (s - 1);
	string_end(s + 1);
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

	e = string_end(s);
	return (my_palidrome(s, e));
}
