// Print number and its square root for 0 to 9
#include <stdio.h>
#include <math.h>

void main()
 {
    int n = 0;

    while (n < 10) {
        printf("Number: %d, Square Root: %.2f\n",n, sqrt(n));
       n++;
    }
}