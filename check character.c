#include <stdio.h>

int main()
{
    char ch;
    
    printf("enter character");
    scanf("%c",&ch);
    
    if(ch>='a'&&ch<='z')
      printf("character is lowercase");
      
    else if(ch>='A'&&ch<='Z')
      printf("character is uppercase");
      
    else if(ch>='0'&&ch<='9')  
      printf("character is digit");
}
