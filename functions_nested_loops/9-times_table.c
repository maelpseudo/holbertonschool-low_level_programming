#include <stdio.h>
#include "main.h"

void times_table(void) {
	int i, j;
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			int product = i * j;
			if (j != 9) {
				_putchar('0' + product);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + product);
			}
		}
		_putchar('\n');
	}
}
