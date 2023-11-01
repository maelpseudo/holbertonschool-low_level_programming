#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * 
 * 
 * 
 * 
*/

int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    else
    {
        x = pow(x, y);
        return (x);
    }
}
