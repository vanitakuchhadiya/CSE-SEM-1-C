// Read 3 numbers, multiply largest number from ƒrst two numbers to third one using
// conditional
#include<stdio.h>
void main()
{
    int a,b,c,largest_number,result;
    printf("enter a value of a: ");
    scanf("%d",&a);
    printf("enter a value of b: ");
    scanf("%d",&b);
    printf("enter a value of c: ");
    scanf("%d",&c);
    largest_number=(a>b)?a:b;
    printf("%d\n",largest_number);
    
    result=largest_number*c;
    printf("%d",result);
}