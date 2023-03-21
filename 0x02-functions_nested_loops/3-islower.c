#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The char to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set apporopriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
	_putchar('\n');
	return (0);
}