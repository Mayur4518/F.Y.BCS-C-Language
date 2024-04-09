//Accept string and display only one string whose length is bigger
#include<stdio.h>
int main()
{
	int i,c1=0,c2=0;
	char s1[20],s2[20];
	printf("Enter first string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		c1++;
	}
	printf("Enter second string:");
	gets(s2);
	printf("bigger length of string:");
	for(i=0;s2[i]!='\0';i++)
	{
		c2++;
	}
	if(c1>c2)
	  printf("%s",s1);
	else
	  printf("%s",s2);
}
