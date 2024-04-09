#include<stdio.h>
int main()
{
	int a[40],i,n,num;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n numbers:");
	  for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	printf("Enter number to search:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	  {
	  	if(a[i]==num)
	  	break;
	  }
	  if(i==n)
	    printf("Number is not found");
	else
	    printf("Number is found");
}
