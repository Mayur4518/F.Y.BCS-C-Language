#include<stdio.h>
int main()
{
	int a,b;
	void swap(int a,int b);
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("\n value of a=%d",a);
	printf("\n value of b=%d",b);
}
