// Print all uppercase and lowercase alphabe(while loop)
#include <stdio.h>

void main() {
    char ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n"); 
    ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }

    printf("\n"); 
}