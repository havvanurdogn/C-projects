#include<stdio.h>
void place(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int a,b;
	printf("Please enter two integers:\n");
	scanf("%d %d",&a,&b);
	printf("Before placement a=%d and b=%d\n",a,b);
	place(&a,&b);
	
	printf("After placement a=%d and b=%d\n",a,b);
	
	return 0;
}
