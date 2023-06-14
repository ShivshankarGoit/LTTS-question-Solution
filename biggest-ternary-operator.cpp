/*Write a function to find biggest of 2 numbers using 
-ternary operator*/

#include <stdio.h>
int biggestOfTwoNumber(int n1,int n2);
int main()
{
    int n1,n2,large;
    printf("Enter the first number: ");
    scanf("%d", &n1);
     printf("Enter the second number: ");
    scanf("%d", &n2);
     large=biggestOfTwoNumber(n1,n2);

    printf("biggest number is %d",large);

    return 0;
}
int biggestOfTwoNumber(int n1,int n2)
{
    int biggest = (n1 > n2) ? n1 : n2;
    return biggest;
}
