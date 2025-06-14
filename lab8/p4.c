// Print sum of 1 to n numbers
#include <stdio.h>

void main() {
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) 
    {
        sum += i;
        i++;     
    }
    printf("Sum of numbers from 1 to %d is %d\n", n, sum); 
}