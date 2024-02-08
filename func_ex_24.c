#include<stdio.h>
void divide(int a,int b)
{
	int c,d;
	c=a/b;
	d=a%b;
	printf("Quotient is %d and remainder is %d",c,d);
}
int main()
{
	int x,y;
	printf("Please enter the number that you want to divide:\n");
	scanf("%d",&x);
	printf("Please enter the divisor:\n");
	scanf("%d",&y);
	divide(x,y);
	return 0;
}
