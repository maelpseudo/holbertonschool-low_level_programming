#include "main.h"
#include <stdio.h>

/**
 * 
 * 
 * 
*/

int factorial(int n) {
    if (n < 0) {
        return -1;
    } else {
        int result = 1;
        while (n > 0) {
            result *= n;
            n--;
        }
        return result;
    }
}
