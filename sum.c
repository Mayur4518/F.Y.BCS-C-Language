#include<stdio.h>
int main()
{
	int n,first,last;
	printf("Enter number");
	scanf("%d",&n);
	last=n%10;
	while(n>0)
	{
		first=n%10;
		n=n/10;
	}
	 printf("\n sum=%d",first+last);
}
