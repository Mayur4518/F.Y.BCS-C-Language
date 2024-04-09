#include<stdio.h>
int main()
{
	int n;
	void sumdigit(int n);
	printf("Enter number:");
	scanf("%d",&n);
	sumdigit(n);
}
  void sumdigit(int n)
  {
  	int d,s=0;
  	while(n>0)
  	{
  		d=n%10;
  		s=s+d;
  		n=n/10;
	}
	 printf("\n Sum of digit=%d",s); 
  }
