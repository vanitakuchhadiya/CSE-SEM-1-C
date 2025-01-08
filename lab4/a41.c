// Print average of three numbers. (with scanf)
#include<stdio.h>
void main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3.0;
    printf("sum=%d \n avg =%f",sum,avg);

}