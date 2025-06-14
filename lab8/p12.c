// Take two numbers input from user and perform a multiplication without using a * operator.

#include <stdio.h>

int main() {
    int a,b, result = 0, count = 0;

 
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int negative = 0;  

    if (a< 0) {
        a=-b;
        negative = !negative;
    }
    if (b < 0) {
        b=-b;
        negative = !negative;
    }
    while (count < b) {
        result += a; 
        count++;       
    }

    if (negative) {
        result = -result;
    }
    printf("Result of multiplication: %d\n", result);
}