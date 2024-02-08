#include<stdio.h>
double square(double num)
{
	double k;
	int i;
	if(num<0.0) printf("You entered wrong number!\nPlease try again:::\n");
	else if(num==0) return 0;
	else
	{
		k=num/2;
		for(i=0;i<50;i++)
		{
			k=((k*k)+num)/(2*k);
		}
		return k;
	}
}
int main()
{
	double n;
	printf("Please enter a number:\n");
	scanf("%lf",&n);
	printf("Square root of %.3lf is %.3lf",n,square(n));
	return 0;
}
