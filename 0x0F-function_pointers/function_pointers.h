#ifndef FUNCTION_H
#define FUNCTION_H
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
#endif
