//Swap two numbers. ( using temporary variable)
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swpping two numbers:a=%d,b=%d\n",a,b);
    }