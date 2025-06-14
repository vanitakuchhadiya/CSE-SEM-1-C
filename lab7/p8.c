// Check for equality of two numbers without using arithmetic or comparison operator.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter a value of a: ");
    scanf("%d",&a);
     printf("Enter a value of b: ");
    scanf("%d",&b);
    (a^b==0)?printf("given numbers are equal"):printf("given numbers are not  equal");
}