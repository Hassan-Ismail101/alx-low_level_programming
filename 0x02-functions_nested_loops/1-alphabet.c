#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes the char to stdout
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
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
