//Print addition of 2 numbers. (with scanf)
#include<stdio.h>
void main()
{
    int a,b,sum;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum=a+b;
    printf("Addition of %d and %d is %d",a,b,sum);
}