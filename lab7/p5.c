// Check whether number is even number or odd number using conditional operator
#include<stdio.h>
void main()
{
    int a,result;
    printf("enter a value of a: ");
    scanf("%d",&a);
    result=(a % 2==0)?printf("number is even"):printf("number is odd");
   

}