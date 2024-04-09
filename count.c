#include<stdio.h>
int main()
{
	int n,d,even=0,odd=0,zero=0;
	printf("Enter number");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		if(d==0)
		  zero++;
		else if(d%2==0)
		  even++;
		else
		  odd++;
	}
	 printf("\n Even count=%d",even);
	 printf("\n odd count=%d",odd);
	 printf("\n zero count=%d",zero);
}
