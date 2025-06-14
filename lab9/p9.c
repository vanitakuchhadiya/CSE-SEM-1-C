// . Convert decimal number to binary. (i.e. n=11  output: 1101)
#include <stdio.h>

int main() {
    int num, binary = 0, remainder, base = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

   int temp = num;  
    while (num > 0) {
        remainder = num % 2;          
        binary += remainder *base;  
        num /= 2;                     
        base *= 10;                  
    }
    printf("The binary equivalent of %d is: %d\n",temp, binary);
}