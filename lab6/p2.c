// Enter basic salary of an employee and calculate Gross salary according to given
// conditions:
// - Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
// - Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
// - Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic
#include<stdio.h>
void main()
{
    float HRA,DA,Salary,Grosssalary;
    printf("Enter your Salary:");
    scanf("%f",&Salary);
    {
        if(Salary>=10000 && Salary<20000)
        {
            Grosssalary=(0.2*HRA)+(0.8*DA)+(Salary);
            printf("%f",Grosssalary);
        }
        
        if(Salary>=20000 && Salary<30000)
        {
            Grosssalary=(0.25*HRA)+(0.9*DA)+(Salary);
            printf("%f",Grosssalary);
        }
        
        if(Salary>=30000)
        {
            Grosssalary=(0.3*HRA)+(0.95*DA)+(Salary);
            printf("%f",Grosssalary);
        }
    }
}