#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void print_to_98(int n) {
	int i;
    if (n <= 98) {
        for (i = n; i <= 98; i++) {
            printf("%d", i);
            
            if (i < 98) {
                printf(", ");
            }
        }
        printf("\n");
    } else {
        printf("n is greater than 98. No numbers to print.\n");
    }
}
