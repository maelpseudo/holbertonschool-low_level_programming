#include "main.h"
#include <stdio.h>

/**
 * 
 * 
 * 
*/

void swap_int(int *a, int *b)
{
    int n, i;

    n = *a;
    i = *b;

    *a = i;
    *b = n;
}