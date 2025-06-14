//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s
// choice using switch.
#include<stdio.h>
void main()
{
   int a,b;
    int choice;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter choice: ");
    scanf("%d",&choice);
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division");
    switch(choice)
    {
        case 1:printf("addition of %d and %d is %d",a,b,a+b);
        break;
         case 2:printf("subtraction of %d and %d is %d",a,b,a-b);
        break;
         case 3:printf("multiplication of %d and %d is %d",a,b,a*b);
        break;
         case 4:printf("division of %d and %d is %d",a,b,a/b);
        break;
        default:printf("invalid choice!!!");
        break;
    }

}