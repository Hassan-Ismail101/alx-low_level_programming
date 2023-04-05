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
	printf("################### number4 #################\n");
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("");
        printf("%d\n", r);

	return (0);
}
