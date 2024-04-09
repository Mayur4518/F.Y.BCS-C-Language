// pallindrum number:
#include<stdio.h>
int main()
{
	int n,d,r=0,n1;
	printf("Enter number:");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	if(r==n1)
	  printf("Number is pallindrum");
    else
      printf("No is not pallindrum");
}
