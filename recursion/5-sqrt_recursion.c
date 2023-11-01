#include "main.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

int _sqrt_recursion(int n) {
    int sqrt_result;

    if (n < 0) {
        return -1;
    }

    sqrt_result = sqrt(n);
    if (sqrt_result * sqrt_result == n) {
        return sqrt_result;
    } else {
        return -1;
    }
}
