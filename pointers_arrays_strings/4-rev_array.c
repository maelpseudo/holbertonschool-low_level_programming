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
    int length = strlen(*a);
    int result;

    for(; length >= 0; length--)
    {
        result = result + a[length];
    }

}