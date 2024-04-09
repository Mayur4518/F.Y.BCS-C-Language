#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("Enter limit");
	scanf("%d",&n);
	printf("Enter n numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 printf("\n numbers=");
	 for(i=0;i<n;i++)
	 {
	 	printf("\n%d",a[i]);
	 }
}

