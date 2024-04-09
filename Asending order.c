#include<stdio.h>
int main()
{
	int a[10],i,n,t;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n numbers:");
	for(i=0;i<n;i++)
	{
	
		scanf("%d",&a[i]);
	}
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]>a[i+1])
	 	{
	 		t=a[i];
	 		a[i]=a[i+1];
	 		a[i+1]=t;
		 }
	 }
	 printf("\n ascending order \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("\t%d",a[i]);
      }
}
