#include "main.h"
#include<stdio.h>
#include<stdlib.h>
 
void times_table(void)
{
    int fibonacci[30];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    short compteur;
 
    for(compteur = 2; compteur < 30; compteur ++)
    {
         fibonacci[compteur] = fibonacci[compteur - 2] + fibonacci[compteur - 1];
         printf("%d", fibonacci[compteur]);
    }
}
