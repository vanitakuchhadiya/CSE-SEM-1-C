// Print all integer greater than 100 and less than 200 that are divisible by 7 but not
// divisible by 5.
#include<stdio.h>
void main()
{
    int i=101;
    while( i<200)
    {
        if(i%7==0 && i%5!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}