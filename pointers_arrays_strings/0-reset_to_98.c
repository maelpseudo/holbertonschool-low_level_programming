#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - pointers to int
 * @n: input integer
 * return: 0 (Success)
 */

void reset_to_98(int *n)
{
    printf("value is %d and pointer is %p", *n, &n);
}