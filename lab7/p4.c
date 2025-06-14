// Find out largest number from given 3 numbers using conditional operator.
#include<stdio.h>
void main()
{
    int a,b,c,sum;
    printf("enter a value of a: ");
    scanf("%d",&a);
    printf("enter a value of b: ");
    scanf("%d",&b);
    printf("enter a value of c: ");
    scanf("%d",&c);
    sum=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("the largest number is %d",sum);
    

}