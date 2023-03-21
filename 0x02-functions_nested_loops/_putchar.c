#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character ot print
 *
 * Return; On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _puthchar(char c)
{
	return(write(1, &c, 1));
}