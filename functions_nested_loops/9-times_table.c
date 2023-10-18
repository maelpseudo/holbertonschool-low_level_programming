#include <stdio.h>
#include "main.h"

void times_table(void) {
    int rone, cone, d;

    for (rone = 0; rone <= 9; rone++) {
        for (cone = 0; cone <= 9; cone++) {
            d = rone * cone;
		if (j < 10)
		{	
            if (d < 10) {
                printf("%d", d);
            } else {
                printf("%d", d / 10);
                printf("%d", d % 10);
            }

            if (cone < 9) {
                printf(", ");
            }
		}
		else
                {
            if (d < 10) {
                printf("%d", d);
            } else {
                printf("%d", d / 10);
                printf("%d", d % 10);
            }

            if (cone < 9) {
                printf(", ");
            }
                }
        }
        printf("\n");
    }
}
