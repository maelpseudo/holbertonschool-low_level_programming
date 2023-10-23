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
    int i = 0;
    int result = 0;
    int sign = 1;
    int started = 0;

    while (s[i] != '\0') {
        i++;
    }

    for (i = 0; i < i; i++) {
        if (isdigit(s[i])) {
            int digit = s[i] - '0';
            result = result * 10 + digit;
            started = 1;
        } else if ((s[i] == '-' || s[i] == '+') && !started) {
            if (s[i] == '-') {
                sign = -1;
            }
        } else if (started) {
            break;
        }
    }

    return result * sign;
}
