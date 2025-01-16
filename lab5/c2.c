//Check whether the given number is odd or even without using % operator
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if ((a/2)*2==a)
    {
        printf("%d is even number",a);
    }
    else
    {
        printf("%d is odd number",a);
    }
  
}