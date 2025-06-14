// Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
void main()
{
    int i=0,n,count_odd=0,count_even=0;
    while(i<10)
     {
        printf("Enter number %d: ", i + 1);
     scanf("%d", &n);
     if(n%2==0)
     {
        count_even++;
     }
     else{
        count_odd++;
     }
     i++;
     }
     printf("count of even number:%d\n",count_even);
     printf("count of even odd:%d\n",count_odd);


}