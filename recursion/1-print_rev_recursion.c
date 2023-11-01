#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * 
 * 
 * 
*/

void _print_rev_recursion(char *s, int len) {
    if (len < 1) {
        putchar('\n');
        return;
    }

    printf("%c", s[len - 1]);
    _print_rev_recursion(s, len - 1);
}

void print_reverse(char *s) {
    int len = strlen(s);
    _print_rev_recursion(s, len);
}
