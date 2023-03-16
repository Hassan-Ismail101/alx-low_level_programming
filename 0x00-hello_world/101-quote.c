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
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return 1;
}
