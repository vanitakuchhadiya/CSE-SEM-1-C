//. Print day name of week using switch.
#include<stdio.h>
void main()
{
    int n;
    printf("enter number(1-7): ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Monday");
        break;
        case 2:printf("Tuesday");
        break;
        case 3:printf("Wednesday");
        break;
        case 4:printf("Thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        case 7:printf("Sunday");
        break;
        default:printf("invalid number");
        break;
    }
}