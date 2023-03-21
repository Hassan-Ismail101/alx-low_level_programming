#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The string to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set apporopriately
 */
int _putchar(char *c)
{
	return (write(1, c, strlen(c)));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_putchar("_putchar\n");
	return (0);
}
