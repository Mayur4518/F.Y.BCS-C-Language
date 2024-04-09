#include<stdio.h>
int main()
{
	float r,a;
	char ch;
    printf("Enter redius:");
	scanf("%f",&r);
	printf("\nEnter choice");
	scanf("%c",&ch);
	switch(ch)
	{
		case'1':a=2*3.14*r*r;
		        printf("Area of circle=%f",a);
		        break;
		case'2':a=(float)4/3*3.14*r*r*r;
		         printf("Volume of sphere=%f",a);
		         break;
		case'3':a=2*3.14*r;
		        printf("Circumference of circle=%f",a);
		        break;
		default:printf("Invalid choice");
	}
}
