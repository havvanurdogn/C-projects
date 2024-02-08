#include<stdio.h>
int big(int num1, int num2)
{
	if(num1<num2) return 0;
	else if(num2<num1) return 1;
	else return 2;
}


int main()
{
	int a,b,r;
	printf("Please enter two integers:\n");
	scanf("%d %d",&a,&b);
	r=big(a,b);
	if(r==0) printf("%d is bigger than %d",b,a);
	else if(r==1) printf("%d is bigger than %d",a,b);
	else printf("%d is equal to %d",a,b);
	
	return 0;
}
