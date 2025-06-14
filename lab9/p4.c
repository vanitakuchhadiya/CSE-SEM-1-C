// Find factorial of the given number.
#include<stdio.h>
void main()
{
    int factorial=1,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        factorial*=n;
        n--;

    }
    printf("factorial=%d",factorial);
}