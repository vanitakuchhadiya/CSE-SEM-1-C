// Print numbers between two given numbers which is divisible by 2
#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the second number: ");
    scanf("%d", &end);

    int i = start + 1; 
    printf("Numbers divisible by 2 between %d and %d:\n", start, end);

    while(i < end) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
}
