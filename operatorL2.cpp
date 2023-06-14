#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    int result = num;  // Initialize result with the input number
    
    if (oper_type == 1) {
        result |= (1 << (pos - 1)) | (1 << (pos - 2));  // Set 2 bits from nth bit position
    } else if (oper_type == 2) {
        result &= ~((1 << (pos - 1)) | (1 << (pos - 2)) | (1 << (pos - 3)));  // Clear 3 bits from nth bit position
    } else if (oper_type == 3) {
        result ^= 1 << 31;  // Toggle MSB
    }
    
    return result;
}

int main() {
    int num ;  // Example input number
    int oper_type;    // Example operation type
    int pos;          // Example bit position
      printf("enter number:");
     scanf("%d",&num);
     printf("enter operator type:");
     scanf("%d",&oper_type);
     printf("Enter the position:");
     scanf("%d",&pos);
    int result = bit_operations(num, oper_type, pos);
    printf("Result: %d\n", result);

    return 0;
}
