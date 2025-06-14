#include<stdio.h>
void main()
{
    int a,b,c,result;
   printf("Enter a number:");
   scanf("%d",&a);
   result=(a%2==0)?printf("even number"):printf("odd number");
}