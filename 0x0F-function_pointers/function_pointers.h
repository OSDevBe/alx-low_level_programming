#ifndef _FUNCTION_POINTER_H_
#define _FUNCTION_POINTER_H_

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif