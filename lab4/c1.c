//Convert seconds into hours, minutes & seconds and print in HH:MM:SS. [e.g. 10000 seconds = 02:46:40)]


#include<stdio.h>
void main()
{
    int sec,h,m,s;
    printf("enter the number of seconds: ");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-(h*3600))/60;
    s=(sec-(h*3600)-(m*60));
    printf("%d:%d:%d",h,m,s);
}
