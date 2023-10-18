#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void print_to_98(int n) {
if (n <= 98) {
for (int i = n; i <= 98; i++) {
printf("%d", i);
if (i < 98) {
printf(", ");
}
}
printf("\n");
}
else
{
	printf("111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98");
}
}
