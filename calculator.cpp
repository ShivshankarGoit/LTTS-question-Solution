#include <stdio.h>

float calculator(float num1, char oper, float num2)
{
    float result;
    switch (oper)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid operator!\n");
        result = 0;
        break;
    }
    return result;
}

int main()
{
    float a, b;
    char oper;
    float result;

    printf("Enter Number1: ");
    scanf("%f", &a);

    printf("Enter the operator: ");
    scanf(" %c", &oper);

    printf("Enter Number2: ");
    scanf("%f", &b);

    result = calculator(a, oper, b);

    printf("Result: %.2f\n", result);

    return 0;
}

