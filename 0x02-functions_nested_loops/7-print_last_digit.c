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
 * print_last_digit - write the last digit of number
 * @n: The number to test
 *
 * Return: last digit of @n and print it
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar(n % 10 + '0');
	return (n % 10);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
