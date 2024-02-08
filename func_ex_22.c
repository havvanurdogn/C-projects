#include<stdio.h>
#define pi 3.14
float area(int r)
{
	float re;
	re=pi*r*r;
	return re;
}
float crc(int r)
{
	float res;
	res=2*pi*r;
	return res;
}
int main()
{
	int r;
	printf("Please enter radius:\n");
	scanf("%d",&r);
	area(r);
	crc(r);
	printf("Area of circle is %.2f\n",area(r));
	printf("Circumference of the circle is %.2f\n",crc(r));
	return 0;
}
