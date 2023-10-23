#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * 
 * 
 * 
*/

int _atoi(char *s)
{
    int length = strlen(s);
    int i, result = 0;

    for (i = 0; i < length; i++)
    {
        if (isdigit(s[i]))
        {
            result = result * 10 + (s[i] - '0');
        }
    }
    return(result);
}
