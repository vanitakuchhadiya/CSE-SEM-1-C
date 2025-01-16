//Find out largest number from given three numbers
#include<stdio.h>
void main()
{
    int a,b,c,l;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    {
        if(a>b)
        {
            if(a>c)
            {
                printf("%d is the largest number",a);
            }
            else
            {
                printf("%d is the largest number",c);
            }
        }
        {
                 if(b>c)
                 {
                    printf("%d is the largest number",b);
                 }
                 else
                 {
                    printf("%d is the largest number",c);
                 }
            
            
        }
    }
    

}