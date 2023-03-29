#include "main.h"
/**
 * _isalnum - check if the char is alphanumtor
 * @c: the char
 * Return: 1 if true and 0 if false
 */
int _isalnum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	if (c == '-')
		return (1);
	return (0);
}
/**
 * _islower - check if the char is lower case
 * @c: the char to be checked
 * Return: 1 if true and 0 if false
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/**
 * cap_string - used to capitalize a string
 * @s: pointer to the string
 * Return: the capitalized string
 */

char *cap_string(char *s)
{
	int flag;
	int itr;

	itr = 0;
	flag = 0;
	while (*(s + itr) != '\0')
	{
		if (_isalnum(*(s + itr)) && flag == 0)
		{
			flag = 1;
			if (_islower(*(s + itr)))
			{
				*(s + itr) -= 32;
			}
		}
		if (_isalnum(*(s + itr)) == 0)
			flag = 0;
		itr++;
	}
	return (s);
}
