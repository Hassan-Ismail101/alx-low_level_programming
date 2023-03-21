#include "main.h"
/**
 * print_alpha - write the alpha letters
 */
static void print_alpha(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
/**
 * print_alphabet_x10 - write print_alphabet (10) times
 */
void print_alphabet_x10(void)
{
	char counter;

	for (counter = 1; counter <= 10; counter++)
		print_alpha();
}
