#include "4-sum.h"
#include "3-function_like_macro.h"
#include <stdio.h>


int main(void)
{
	int s;
	int i;
	int j;

	s = SUM(98, 1024);
	printf("%d\n", s);
	i = ABS(-98) * 10;
	j = ABS(98) * 10;
	printf("%d, %d\n", i, j);
	return (0);
}
