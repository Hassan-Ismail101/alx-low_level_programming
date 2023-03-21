#include "main.h"
/**
 * _putchar - writes the char to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
