#include <stdio.h>
void numbers_dividable_on_three_and_five(void)
{
	unsigned int sum;
	unsigned int startNum;

	sum = 0;
	startNum = 1023;
	startNum = startNum - (startNum % 3);
	while(startNum)
	{
		sum += startNum;
		startNum 
