#include <stdio.h>
#include <string.h>
#include <unistd.h>


/*
 * main - entry point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	write(1, "and that piece of art", strlen("and that piece of art"));
	write(1, " is useful\" - Dora K", strlen(" is useful\" - Dora K"));
	write(1, "orpar, 2015-10-19\n", strlen("orpar, 2015-10-19\n"));
	return (1);
}
