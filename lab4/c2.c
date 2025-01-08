//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3  days]
#include<stdio.h>
void main()
{
    int ndays,years,weeks,days;
    printf("enter the number of days:");
    scanf("%d",&ndays);
    years=ndays/365;
    weeks=(ndays%365)/7;
    days=ndays-(years*365)-(weeks*7);
    printf("%d %d %d",years,weeks,days);

}