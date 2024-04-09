#include<stdio.h>
int main()
{
	int a,b,c;
	int sub(int a,int b);
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=sub(a,b);
	printf("\n Substraction=%d",c);
}
  int sub(int a,int b)
  {
  	int c=a-b;
  	return c;
  }

