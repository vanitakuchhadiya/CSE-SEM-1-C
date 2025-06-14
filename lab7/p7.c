//  Check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter an character: ");
    scanf("%c",&ch);
    ((ch<='A' && ch>='Z')||(ch<='a' && ch>='z'))?printf("character is an alphabet"):printf("character is not alphabet");
}