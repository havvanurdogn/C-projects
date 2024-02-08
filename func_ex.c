#include<stdio.h>
float opr(float a, float b, char ch)
{
	if(ch=='+') return (a+b);
	else if(ch=='-') return (a-b);
	else if(ch=='*') return (a*b);
	else if(ch=='/') return (a/b);
	else printf("You entered wrong operation!\nPlease try again:::\n");
	
}

int main()
{
	char ch;
	float a,b;
	float r;
	printf("Please enter the operation:\n");
	scanf("%c",&ch);
	printf("Please enter two numbers:\n");
	scanf("%f %f",&a,&b);
	printf("Result is %.2f\n",opr(a,b,ch));
	
	
	return 0;
}
