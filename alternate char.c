//Accept string and display alternate character
#include<stdio.h>
int main()
{
	char s1[100];
	int i;
	printf("Enter string:");
	gets(s1);
	printf("Alternate character:");
	for(i=0;s1[i]!='\0';i=i+2)
	{
		printf("%c",s1[i]);
	}
}
