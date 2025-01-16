//Check whether given character is vowel or consonant. (Using single if only)
#include<stdio.h>
void main()
{
    char c;
    int lower_case,upper_case;
    printf("enter an alphabet: ");
    scanf("%c",&c);
    lower_case=(c=='a'||c=='i'||c=='e'||c=='o'||c=='u');
    upper_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lower_case||upper_case)
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is a constant",c);
    }
}