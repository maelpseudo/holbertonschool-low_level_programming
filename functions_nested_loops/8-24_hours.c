#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print all minutes from 00:00 to 23:59
 *
 * result: none
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("%02d:%02d\n", h, m);
		}
	}
}
