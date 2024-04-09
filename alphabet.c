#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	if(ispunct(ch))
	  printf("Character is a punctuation mark");
	else
	   printf("Character is not a punctuation mark");
}
