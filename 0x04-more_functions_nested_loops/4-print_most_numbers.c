#include <stdio.h>

#include "main.h"

void print_numbers(void)

{

int n;

for (n = 48; n < 58; n++)

{

if ((n == 50) || (n == 52))

{

continue;

}

putchar(n);

}

putchar(10);

}
