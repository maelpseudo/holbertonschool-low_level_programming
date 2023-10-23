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
    int i = 0;
    int n = 1;

while (*s && !isdigit(*s))
{
if (*s == '-') {
n = -1;
}
s++;
}

while (isdigit(*s))
{
i = (i * 10) + (*s - '0');
s++;
}
return i * n;
}
