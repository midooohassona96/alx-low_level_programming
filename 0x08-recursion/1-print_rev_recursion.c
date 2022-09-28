#include "stdio.h"

#include "main.h"

void _print_rev_recursion(char *s)

{

printf("C function that prints a string in reverse \n");

if (*s)

{

_print_rev_recursion(s + 1);

_putchar(*s);

}

}
