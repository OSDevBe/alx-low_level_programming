#ifndef _FUNCTION_POINTER_H_
#define _FUNCTION_POINTER_H_

#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif /* _FUNCTION_POINTER_H_ */