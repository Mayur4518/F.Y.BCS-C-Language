#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0;
	printf("Enter matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Display matrix sum:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		s=s+a[i][j];
		{
			printf("%d",s);
		}
	}
}
