#include "main.h"
/**
 * _strspn - find the lenght of substring
 * @s: The string
 * @accept: the substring
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	char freq[125] = {0};
	unsigned int itr;
	unsigned int counter;

	itr = 0;
	while (*(accept + itr) != '\0')
	{
		if (!freq[*(accept + itr)])
			freq[*(accept + itr)] = 1;
		itr++;
	}
	itr = 0;
	counter = 0;
	while (*(s + itr) != '\0')
	{
		if (freq[*(s + itr)])
			counter++;
		else
			return (counter);
		itr++;
	}
	return (counter);
}
