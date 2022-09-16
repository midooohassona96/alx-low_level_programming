#include "main.h"

int largest_number(int a, int b, int c)

{

int largest = b;

if (a > b)

{

largest = a;

}

else if (c > b)

{

largest = c;

}

return (largest);

}
