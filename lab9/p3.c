// Calculate without using power function
#include<stdio.h>
void main()
 {
    int y,x,result=1;
    printf("enter exponent: ");
    scanf("%d",&y);
    printf("Enter base: ");
    scanf("%d",&x);
    while(y>0)
    {
       result=result*x;
       y--;
    }
    printf("%d",result);
 }