#include <stdio.h>
#include "main.h"

void times_table(void) {

	int i, j;

	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			printf("%2d, ", i * j);
		}
		printf("\n");
	}
}
