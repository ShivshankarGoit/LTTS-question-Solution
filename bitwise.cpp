#include <stdio.h>

void printExponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num; // Treat the double number as a 64-bit unsigned integer

    // Extract the exponent bits using bitwise operations
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Convert the exponent to hexadecimal format
    printf("Exponent (Hex): 0x%llX\n", exponent);

    // Convert the exponent to binary format
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long mask = 1ULL << i;
        printf("%d", (exponent & mask) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}

