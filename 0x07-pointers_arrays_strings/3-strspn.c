#include "main.h"
/**
 * _strspn - find the lenght of substring
 * @s: The string
 * @accept: the substring
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itra;
	unsigned int itr;
	unsigned int counter;
	unsigned int flag = 0;

	itr = 0;
	itra = 0;
	counter = 0;
	while (*(s + itr) != '\0')
	{
		itra = 0;
		flag = 0;
		while (*(accept + itra) != '\0')
		{
			if (*(s + itr) == *(accept + itra))
			{
				flag = 1;
				counter++;
				break;
			}
			itra++;
		}
		if (flag == 0)
			break;
		itr++;
	}
	return (counter);
}
