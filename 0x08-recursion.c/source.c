#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("################### number1 #################\n");
	_puts_recursion("Puts with recursion");
	printf("################### number2 #################\n");
	_print_rev_recursion("\nColton Walker");
	printf("################### number3 #################\n");
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}
