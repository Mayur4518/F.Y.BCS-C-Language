#include<stdio.h>
int main()
{
	int a[100],i,n,s=0;
	printf("Enter limit");
	scanf("%d",&n);
	printf("Enter n number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]%2==0)
	 	s=s+a[i];
	 }
	 printf("\n sum=%d",s);
	
}
