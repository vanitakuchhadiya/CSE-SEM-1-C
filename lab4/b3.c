//Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)
#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter the value of f: ");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("celsius is %f",c);
}