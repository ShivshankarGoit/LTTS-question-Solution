#include <stdio.h>
int biggestOfThreeNumber(int n1,int n2,int n3);
int main()
{
    int n1,n2,n3,large;
    printf("Enter the first number: ");
    scanf("%d", &n1);
     printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
     large=biggestOfThreeNumber(n1,n2,n3);

    printf("biggest number is %d",large);

    return 0;
}
int biggestOfThreeNumber(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3)
       return n1;
    else if(n2>n1 && n2>n3)
       return n2;
    else 
       return n3;
}
