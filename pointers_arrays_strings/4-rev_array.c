#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
 * 
*/

void reverse_array(int *a, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        // Swap the elements from the beginning and end of the array
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}