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
    int length = strlen(s);
    int i, result = 0;
    int sign = 1;

    for (i = 0; i < length; i++) {
        if (s[i] == '-') {
            sign = -1;
        } else if (isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
        } else if (s[i] == '+') {
        } else {
            continue;
        }
    }

    return result * sign;
}
