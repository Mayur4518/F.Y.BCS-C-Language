#include<stdio.h>
int main()
{
	int a[100],i,n,num;
	printf("Enter limit:");
	scanf("%d",&n);
	printf("Enter n num bers:");
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&a[i]);
	}
	printf("Enter number for search:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		break;
	}
	if(i==num)
	 printf("number is not found");
	else
	  printf("Number is found");
}
