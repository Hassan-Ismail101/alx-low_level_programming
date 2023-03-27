#include "main.h"

/**
 * puts2 - print char every two step
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		_putchar(*(str + counter));
		if (*(str + counter + 1) == '\0')
			break;
		counter += 2;
	}
	_putchar('\n');
}
