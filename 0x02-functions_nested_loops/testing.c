#include "main.h"
#include <limits.h>
int main(void)
{
	int r;

	printf("%d\n", INT_MIN);
	r = print_last_digit(INT_MIN);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
