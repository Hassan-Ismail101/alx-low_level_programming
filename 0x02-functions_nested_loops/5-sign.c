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
 * print_sign - test is the sign of number
 * @n: The number to test
 *
 * Return: 1 and print '+' if the number @n is greater than zero
 * In case of zero, 0 is returned and print '0'
 * In case of negative, -1 is returned and print '-'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
