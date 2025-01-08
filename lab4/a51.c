//Print area of circle. (pie*r*r)

#include<stdio.h>
void main()
{
    float r,pi=3.14,area;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("area=%f",area);
}