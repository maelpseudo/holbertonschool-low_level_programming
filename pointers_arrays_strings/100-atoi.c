#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * 
 * 
 * 
*/

int _atoi(char *s) {
    int i, sum = 0;
    int sign = 1;

while (*s && !isdigit(*s))
{
if (*s == '-') {
sign = -1;
}
s++;
}

while (isdigit(*s))
{
sum = (sum * 10) + (*s - '0');
s++;
}
return sum * sign;
}
