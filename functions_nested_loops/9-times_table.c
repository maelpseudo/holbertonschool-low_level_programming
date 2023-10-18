#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void times_table(void)
{
	int nbren=1,i,som=0;

	for(i=1;i<=max;i++)
	{
		printf("%d\n",nbren);
		som=som+nbren;
		nbren=nbren+som;
	}
	system("pause");
	return(0);
}
