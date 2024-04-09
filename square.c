#include<stdio.h>
int main()
{
	int a[100],n,i,s=0,c=0;
	printf("Enter limit");
	scanf("%d",&n);
	printf("Enter n numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n square \n");
	for(i=0;i<n;i++)
	{
		s=a[i]*a[i];
		c=a[i]*a[i]*a[i];
			printf("\nsquare of %d=%d \n cube of %d=%d",a[i],s,a[i],c);
	}

}
