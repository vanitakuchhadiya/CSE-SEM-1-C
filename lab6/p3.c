// Check whether the entered character is upper case, lower case, digit or any special
// character
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character:");
  scanf("%c",&ch);
  if(ch>=65 && ch<=90){
    printf("uppercase");
  }
  else if(ch>=97 && ch<=127){
    printf("lowercase");
  }
  else if(ch>=48 && ch<=57){
    printf("number");
  }
  else{
    printf("special symbol");
  }
}