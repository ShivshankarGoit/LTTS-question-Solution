#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;  // Initialize result with the input number
    
    if (oper_type == 1) {
        result |= 1 << 0;  // Set 1st bit
    } else if (oper_type == 2) {
        result &= ~(1 << 31);  // Clear 31st bit
    } else if (oper_type == 3) {
        result ^= 1 << 15;  // Toggle 16th bit
    }
    
    return result;
}

int main() {
    int num;  // Example input number
    int oper_type;    // Example operation type
     printf("enter number:");
     scanf("%d",&num);
     printf("enter operator type:");
     scanf("%d",&oper_type);
    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);

    return 0;
}
