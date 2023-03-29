#include "main.h"

/**
 * rot13 - rotate a string by 13
 * @s: pointer to the string
 * Return: the string after encoded
 */

char *rot13(char *s)
{
	char enc[] = "abcdefghijklmABCDEFGHIJKLM`nopqrstuvwxyzNOPQRSTUVWXYZ";
	int originItr;
	int encItr;

	originItr = 0;
	encItr = 0;
	while (*(s + originItr) != '\0')
	{
		encItr = 0;
		while (*(enc + encItr) != '\0')
		{
			if (*(s + originItr) == *(enc + encItr) && encItr != 26)
			{
				*(s + originItr) = (*(enc + ((encItr + 27) % 54)));
				break;
			}
			encItr++;
		}
		originItr++;
	}
	return (s);
}
