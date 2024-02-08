#include<stdio.h>
int main()
{
	printf("This program calculates f(x) values.\n");
	float x,r;
	printf("Please enter x's value:");
	scanf("%f",&x);
	
	r=x*x*x+13*x*x+47*x+5;
	
	printf("Result is %.3f",r);
	
	
	
	return 0;
}
