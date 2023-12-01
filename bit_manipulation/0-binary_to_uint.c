#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    int i = 0;

    while (b[i] != '\0') {
        if (b[i] != '0' && b[i] != '1') {
            return 0;
        }

        result = (result << 1) + (b[i] - '0');
        i++;
    }

    return result;
}

int main() {
    const char *binary_str = "1101";
    unsigned int decimal_num = binary_to_uint(binary_str);
    printf("Binary: %s, Decimal: %u\n", binary_str, decimal_num);

    return 0;
}
