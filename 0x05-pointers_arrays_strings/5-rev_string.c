#include "main.h"

/**
 * rev_string - function used to reverse a string
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int len;
	int counter;
	char temp;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	for (counter = 0; counter < len / 2; counter++)
	{
		temp = *(s + counter);
		*(s + counter) = *(s + len - 1 - counter);
		*(s + len - 1 - counter) = temp;
	}
}
