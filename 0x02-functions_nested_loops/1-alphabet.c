#include "main.h"

/**
 * print_alphabet - writes the alphabet in lowercase
 */
void print_alphabet(void)
{
	char counter;

	for (counter = 'a'; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
}
