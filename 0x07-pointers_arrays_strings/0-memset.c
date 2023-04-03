#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	itr = 0;
	while (itr < n)
		*(s + itr++) = b;
	return (s);
}
