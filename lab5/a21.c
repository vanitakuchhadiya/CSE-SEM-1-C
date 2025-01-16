//swap two number(without using temporary variable)
#include<stdio.h>
void main()
{
    float a,b;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("b=%f\n",b);
    printf("a=%f",a);
}