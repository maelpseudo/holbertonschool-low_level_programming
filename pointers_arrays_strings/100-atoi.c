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

    for (i = 0; i < length; i++) {
        if (s[i] == '-') {
            if (isdigit(s[i + 1])) {
                result = result - (s[i + 1] - '0');
            } else {
                break;
            }
        } else if (isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
        }
    }
    return result;
}
