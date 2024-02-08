#include<stdio.h>
#define kok 1.7
float area(int edge)
{
	float r;
	r=kok*(edge/2)*(edge/2)/2;
	return r;
}


int main()
{
	int a;
	float result;
	printf("Please enter an edge of equilateral triangle:\n");
	scanf("%d",&a);
	result=area(a);
	printf("Area of equilateral triangle is %.2f\n",result);
	return 0;
}
