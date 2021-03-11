#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif /* _FUNCTION_POINTERS_H */
