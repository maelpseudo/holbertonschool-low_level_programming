#include "main.h"
#include <stdio.h>

/**
 * 
 * 
 * 
*/

int factorial(int n) {
    if (n < 0) {
        return -1; // Return -1 for an error if n is negative
    } else {
        int result = 1;
        while (n > 0) {
            result *= n; // Multiply the result by n, then decrement n
            n--;
        }
        return result; // Return the calculated factorial
    }
}
