#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to the string
 * Return: the string after encoded
 */

char *leet(char *s)
{
	char encoder[] = "a4e3o0t7l1A4E3O0T7L1";
	int originItr;
	int encodItr;

	originItr = 0;
	encodItr = 0;
	while (*(s + originItr) != '\0')
	{
		encodItr = 0;
		while (*(encoder + encodItr) != '\0')
		{
			if (*(s + originItr) == *(encoder + encodItr))
				*(s + originItr) = *(encoder + encodItr + 1);
			encodItr += 2;
		}
		originItr++;
	}
	return (s);
}
