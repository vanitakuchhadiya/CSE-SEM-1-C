//. Check whether the given number is odd or even
#include<stdio.h>
void main()
{
    int a;
    printf ("Enter the value of a: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("given number is even");
    }
    else
    {
        printf("given number is odd");
    }

}