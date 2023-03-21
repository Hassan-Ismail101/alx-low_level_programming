#include <unistd.h>
#include <string.h>
#include "_putchar.c"
/**
 * _islower - test is the letter a lowercase
 * @c: The character to test
 *
 * Return: 1 if the letter is lower
 * On other case, 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	return (0);
}
