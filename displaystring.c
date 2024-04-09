#include<stdio.h>
int main()
{
	int i;
	char s[100];
	printf("Enter string:");
	scanf("%s",&s);
	printf("Name=");
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]%2==0)
	printf("%c",s[i]);
}
}
