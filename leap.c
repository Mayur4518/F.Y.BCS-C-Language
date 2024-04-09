#include<stdio.h>
int main()
{
	int y;
	void check_year(int y);
	printf("Enter Year:");
	scanf("%d",&y);
	check_year(y);
}
void check_year(int y)
{
	if(y%4==0)
	  printf("Leap year");
	else
	  printf("Not Leap year");
}
