#include<stdio.h>
int main()
{
	float r,a;
	int ch;
	printf("\n 1-Area of circle");
	printf("\n 2-Circumference of circle");
	printf("\n 3-Volume of sphere");
	printf("\n Enter choice:");
	scanf("%d",&ch);
	printf("Enter radius:");
	scanf("%f",&r);
	
	switch(ch)
	{
		case 1:a=3.14*r*r;
		       printf("Area of circle=%f",a);
		       break;
		case 2:a=2*3.14*r;
		       printf("Circumference of circle=%f",a);
		       break;
		case 3:a=(4/3)*3.14*r*r*r;
		       printf("Volume of sphere=%f",a);
		       break;
		default:printf("Invalid choice");
	}
}
