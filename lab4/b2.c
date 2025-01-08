//Print simple interest. (principal*roi*time period)/100
#include<stdio.h>
void main()
{
    float p,r,t,interest;
    printf("enter the value of p: ");
    scanf("%f",&p);
     printf("enter the value of r: ");
    scanf("%f",&r);
     printf("enter the value of t: ");
    scanf("%f",&t);
    interest=(p*r*t)/100;
    printf("interest is %f",interest);
}