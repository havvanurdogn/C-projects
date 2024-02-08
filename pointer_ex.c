#include<stdio.h>
int main()
{
	int a=50;
	float b=78.23;
	char c='s';
	double d=54855;
	int *p1,*p3;
	float *p2;
	double *p4;
	p1=&a;
	p2=&b;
	p3=&c;
	p4=&d;
	printf("a is equal to %d and address %d \n",*p1,p1);
	printf("b is equal to %.2f and address %d \n",*p2,p2);
	printf("c is equal to %c and address %d \n",*p3,p3);
	printf("d is equal to %.4lf and address %d \n",*p4,p4);
	
	return 0;
}
