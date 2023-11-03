#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: input integer
 * @argv: input integer
 * Return: 0 (Success)
*/


int main(int argc, char *argv[]) {
    (void)argv;
    printf("Number of arguments: %d\n", argc - 1);
    return 0;
}
