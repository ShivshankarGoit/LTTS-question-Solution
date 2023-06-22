/*Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1

Concepts to be used.
- Loops*/



#include <stdio.h>

void printInc(int n);
void printSpac(int n);
void printDec(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the pattern
    int i;
    for (i = n; i >= 1; i--) {
        printInc(i);
        printSpac(2 * (n - i));
        printDec(i);
        printf("\n");
    }

    return 0;
}

// Function to print numbers from 1 to n
void printInc(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

// Function to print spaces
void printSpac(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

// Function to print numbers from n to 1
void printDec(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}


