#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

int _atoi(char *s)
{
    int i, sum = 0;
    for (i = 0; isdigit(*s); s++) {
        sum = (sum * 10) + (*s - '0');
        i++;
    }
    return sum;
}