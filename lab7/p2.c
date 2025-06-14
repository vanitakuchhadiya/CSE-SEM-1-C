//Print number of days in a month using switch
#include<stdio.h>
void main(){
    int n;
    printf("enter number(1-12): ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("number of days 31");
        break;
        case 4:
        case 6:
        case 9:
        case 11:printf("number of days 30");
        break;
        case 2:printf("number of days 29");
        break;
        default:printf("invalid number!");
        break;
        
    }

}