// Take two numbers input from user and perform a division operation and ƒnd out quotient
// and reminder (without using / and % operator) also note that a smaller number should
// divide a bigger number. 
#include <stdio.h>

int main() {
    int a, b, big, small,q = 0, r;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    if(a > b) {
        big = a;
        small = b;
    } else {
        big = b;
        small = a;
    }

    r = big;

    while(r >= small) {
        r = r - small;
        q++;
    }
    printf("Quotient = %d\n", q);
    printf("Remainder = %d", r);

}
