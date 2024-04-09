#include<stdio.h>
int main()
{
	int n;
	void factorial(int n);
	printf("Enter number:");
	scanf("%d",&n);
	factorial(n);
}
 void factorial(int n)
 {
 	int i,f=1;
 	for(i=1;i<=n;i++)
 	{
 		f=f*i;
	}
	printf("\n Factorial=%d",f);
 }
