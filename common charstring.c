#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	int i,j,flag=0;
	printf("Enter string1:");
	gets(s1);
	printf("Enter string2:");              //bbaca
	                                        //bcs
	gets(s2);
	printf("\nCommon character=");
	for(i=0;s1[i]!='\0';i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(s1[i]==s1[j])
			{
				flag=1;break;
			}
		}
       if(flag==0)
	{
		for(j=0;s2[j]!='\0';j++)
		{
			s1[i]==s2[j];
			{
				printf("%c",s1[i]);
				break;
			}
		}
	}
}
}
