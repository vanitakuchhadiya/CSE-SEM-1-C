// nput an integer number and check the last digit of number is even or odd
#include <stdio.h>

int main() {
    int n;
    int lastDigit;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    lastDigit =n % 10;
    if (lastDigit % 2 == 0)
     {
        printf("The last digit (%d) is even.\n", lastDigit);
    } 
    else 
    {
        printf("The last digit (%d) is odd.\n", lastDigit);
    }
}