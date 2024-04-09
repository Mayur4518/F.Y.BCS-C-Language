#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter the operation('+','-','*','/')");
	scanf("%c",&ch);
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case'+':printf("addition=%d",a+b);
		        break;
	    case'-':printf("substraction=%d",a-b);
	            break;
	    case'*':printf("multi=%d",a*b);
	            break;
	    case'/':printf("div=%d",a/b);
	            break;
	            
	}
	
}
