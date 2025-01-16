// Find the second largest number among three user input numbers.
#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    int secondLargest;
    if ((a > b && a < c) || (a < b && a > c)) {
        secondLargest = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        secondLargest = b;
    } else {
        secondLargest = c;
    }
    printf("The second largest number is: %d\n", secondLargest);

    return 0;
}