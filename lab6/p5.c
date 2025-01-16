// Read marks of ƒve subjects. Calculate percentage and print class accordingly. Fail below
// 35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to
// 70, Distinction if more than 70
#include <stdio.h>

void main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    
    printf("Enter marks for subject 4: ");
    scanf("%f", &subject4);
    
    printf("Enter marks for subject 5: ");
    scanf("%f", &subject5);
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500) * 100;
    printf("Total Marks: %f\n", total);
    printf("Percentage: %f\n", percentage);
    if (percentage < 35)
    {
        printf("Fail\n");
    }
     else if (percentage >= 36 && percentage <= 45)
    {
        printf(" Pass Class\n");
    } 
    else if (percentage >= 46 && percentage <= 60) 
    {
        printf("Second Class\n");
    } 
    else if (percentage >= 61 && percentage <= 70) 
    {
        printf(" First Class\n");
    }
     else 
    {
        printf(" Distinction\n");
    }
}