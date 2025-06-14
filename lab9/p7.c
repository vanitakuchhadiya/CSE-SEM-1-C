#include <stdio.h>

int main() {
    int n;
    printf("Enter a decimal number : ");
    scanf("%d", &n);

    int values[] =    {1000, 900, 500, 400, 100, 90,  50, 40,  10, 9,  5, 4, 1};
    char *symbols[] = {"M",  "CM","D", "CD","C", "XC","L","XL","X","IX","V","IV","I"};

    printf("Roman numeral: ");
    for (int i = 0; i < 13; i++) {
        while (n >= values[i]) {
            printf("%s", symbols[i]);
            n -= values[i];
        }
    }
    printf("\n");
}
