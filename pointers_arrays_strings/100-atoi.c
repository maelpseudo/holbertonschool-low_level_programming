#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * 
 * 
 * 
*/

int _atoi(char *s) {
    int i, sum = 0;
    int sign = 1;
    int started = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            sum = (sum * 10) + (s[i] - '0');
            started = 1;
        } else if (s[i] == '-' && !started) {
            sign = -1;
        } else if (started) {
            break;
        }
    }

    return sum * sign;
}
