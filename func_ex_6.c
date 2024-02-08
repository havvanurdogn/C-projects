#include<stdio.h>
int facto(int f)
{
	int i,r=1;
	for(i=f;i>0;i--)
	{
		r=r*i;
	}
	return r;
}
int main()
{
	int x;
	printf("Please enter a number for factoriel:\n");
	scanf("%d",&x);
	printf("Result is %d",facto(x));
	
	
	return 0;
}
