#include<stdio.h>
int main()
{
	int n,d,s=0;
	printf("Enter number:");
	scanf("%d",&n);
	do
	{
		s=0;
		while(n>0)
		{
			d=n%10;
			n=n/10;
			s=s+d;
		}
		n=s;
	}
	  while(n>9);
	  printf("\n Sum of digit=%d",s);
}
