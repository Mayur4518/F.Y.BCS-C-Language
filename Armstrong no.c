//Armstrong number:
#include<stdio.h>
int main()
{
	int n,d,n1,s=0;
	printf("Enter number:");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		s=s+d*d*d;
		n=n/10;
	}
	if(s==n1)
	  printf("Armstrong number");
	else
	  printf("Not Armstrong number");
}
