// Print odd numbers between 1 to 10 then modify 1 to n using while loop
#include <stdio.h>
void main() {
    int n,i = 1; 
    printf("enter a value of n: ");
    scanf("%d",&n);
    while (i <= n) {
        if (i % 2 != 0) 
        { 
            printf("%d ", i);
        }
        i++;
        
    }
    printf("\n");
}