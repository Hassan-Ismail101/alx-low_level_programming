#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *s = "_putchar\n";
	char ctn;

	for (ctn = 0; s[ctn] != '\0'; ctn++)
		_putchar(s[ctn]);
	return (0);
}
