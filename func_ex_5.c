#include<stdio.h>
float opr(int x, int y, char o)
{
	if(o=='+') return x+y;
	else if(o=='-') return x-y;
	else if(o=='*') return x*y;
	else if(o=='/') return x/y;
	else printf("You entered wrong character!\nPlease try again:::\n");
}
int main()
{
	float a,b;
	char ch;
	printf("Please enter an operation:\n");
	scanf("%c",&ch);
	printf("Please enter two numbers:\n");
	scanf("%f %f",&a,&b);
	printf("Result is %.2f",opr(a,b,ch));
	
	
	return 0;
}
