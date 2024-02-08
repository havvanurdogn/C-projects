#include<stdio.h>
void fahre(float h)
{
	float c;
	c=5/9*(h-32);
	printf("%.2f Fahrenheit is equal to %.2f Celsius.\n",h,c);
}


int main()
{
	float h;
	printf("Please enter a heat as fahrenheit:\n");
	scanf("%f",&h);
	fahre(h);
	return 0;
}
