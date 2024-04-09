#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	ch=toupper(ch);
	printf("uppercase character=%c",ch);
}
