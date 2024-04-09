#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j,s=0;
	printf("Enter how many rows and cols:");
	scanf("%d%d",&m,&n);
	printf("Enter matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
	printf("Diagonal sum:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			s=s+a[i][j];
		}
	}
	 printf("%d",s);
}
