#include<stdio.h>
int main()
{
	int a,b;
	void min(int a,int b);
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	min(a,b);
}
 void min(int a,int b)
 {
 	if(a<b)
 	  printf("Minimum number=%d",a);
 	else
 	  printf("Minimum number=%d",b);
 }
