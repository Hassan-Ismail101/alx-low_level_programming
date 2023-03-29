#include "main.h"

/**
 * string_toupper - convert the string to upper case
 * @s: Pointer to the string
 * Return: string after editing
 */
char *string_toupper(char *s)
{
	int itr;

	itr = 0;
	while (*(s + itr) != '\0')
	{
		if (*(s + itr) >= 'a' && *(s + itr) <= 'z')
			*(s + itr) = *(s + itr) - 32;
		itr++;
	}
	return (s);
}
