#include<stdio.h>
int main()
{
	int i,c=0;
	char s[100];
	printf("DEnter string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'
		||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
		{
			c++;
		}
	}
	 printf("vowel count=%d",c);
}
