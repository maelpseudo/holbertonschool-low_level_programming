# Algorithms - Linear and Binary Search

## Description

This project contains two search algorithms implemented in C:

1. **Linear Search**: 
   - `int linear_search(int *array, size_t size, int value);`
   - A simple search algorithm that checks each element in an array sequentially until the desired value is found or the end of the array is reached.

2. **Binary Search**: 
   - `int binary_search(int *array, size_t size, int value);`
   - An efficient search algorithm for sorted arrays, which divides the search interval in half repeatedly to find the target value.

## Compilation

Your programs and functions will be compiled with `gcc` using the options `-Wall -Wextra -Werror -pedantic -std=gnu89`. For example:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o search
