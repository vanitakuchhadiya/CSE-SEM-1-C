//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.

#include <stdio.h>

void main() {
    int a,b;
    char operation;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation); 
    if (operation == '+')
    {
        printf("Result: %d + %d = %d\n",a,b,a+b);
    } 
    else if (operation == '-')
     {
        printf("Result: %d - %d = %d\n",a,b,a-b);
    } 
    else if (operation == '*')
     {
        printf("Result: %d * %d = %d\n",a,b,a*b);
    }
     else if (operation == '/') 
     {
        if (b!= 0)
         {
            printf("Result: %d / %d = %.2f\n",a,b,(float)a/b);
        } 
        else 
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else 
    {
        printf("Error: Invalid operation selected.\n");
    }
}