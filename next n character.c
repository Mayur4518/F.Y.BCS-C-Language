#include<stdio.h>

int main()
{
    char ch;
    int n,i;
    
    printf("enter character");
    scanf("%c",&ch);
    
    printf("enter no");
    scanf("%d",&n);
    
    printf("next n character=");
    for(i=0;i<n;i=i+1)
     {
       printf("%c\t",ch++);
     }
  
}
