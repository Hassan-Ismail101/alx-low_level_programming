#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character ot print
 *
 * Return; On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
/**
 * _putchars - writes the string *c to stdout
 * @c: The character ot print
 *
 * Return; On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _put_chars(void)
{
	write(1, "_putchar\n", strlen("_putchar\n"));
}

