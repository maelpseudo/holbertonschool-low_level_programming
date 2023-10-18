#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void times_table(void)
{
	int i, n, suivant, nbr1, nbr2;

	for (i = 0; i < n; i++)
	{
		if (i <= 1)
			suivant = i;
		else
		{
			suivant = nbr1 + nbr2;
			nbr1 = nbr2;
			nbr2 = suivant;
		}
			printf("%d\n", suivant);
	}
}
