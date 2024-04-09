#include<stdio.h>
int main()
{
	int perfect(int n);
	int n,a;
	printf("Enter number:");
	scanf("%d",&n);
	a=perfect(n);
	if(a==1)
	  printf("Number is Perfect");
	else
	  printf("Number is not Perfect");
}
 int perfect(int n)
 {
 	int i,s=0;
 	for(i=0;i<n;i++)
 	{
 		if(n%i==0)
 		s=s+i;
	}
	 if(s==n)
	   return 1;
	 else
	    return 0;
 }
