// . Calculate sum and average of the square of ƒrst 10 integers whose square has last digit 3.

#include <stdio.h>

int main() {
    int count = 0;  
    int num = 1;    
    int sum = 0;   
    float average; 

    while (count < 10) {
        int square = num * num; 
        if (square % 10 == 3) {
            sum += square;  
            count++;       
        }

        num++; 
    }

    average = (float)sum / count; 
    printf("Sum of squares: %d\n", sum);
    printf("Average of squares: %.2f\n", average);

}