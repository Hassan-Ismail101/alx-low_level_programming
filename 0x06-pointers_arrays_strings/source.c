#include "main.h"
#include <stdio.h>

int main(void)
{
	/*
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char *a = "1";
	char *b = "90000";
	char r[100];
	char r2[2];
	char r3[3];
	char *res;
	
	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "01";
	m = "10";
	res = infinite_add(n, m, r2, 2);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
	n = "0";
        m = "0";
        res = infinite_add(n, m, r2, 2);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
	res = infinite_add(n, m, r3, 3);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
	*/
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	char buffer1[] = "Hassan Ismail Fouad Nasr";
	printf("%s\n", buffer1);
	printf("-----------------------\n");
	print_buffer(buffer1 , sizeof(buffer1));
	return (0);
}
