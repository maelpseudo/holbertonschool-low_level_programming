#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
 * 
*/

void reverse_array(int *a, int n)
{
    int i, result;

    for(i = *a; i >= 0; i--)
    {
        result = result + a[i];
    }

}