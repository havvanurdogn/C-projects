#include<stdio.h>
int res(int a,int b)
{
	return a+b;
}
int main()
{
	int x,y;
	printf("Please enter two integers:\n");
	scanf("%d %d",&x,&y);
	printf("Sum is %d",res(x,y));
	
	
	return 0;
}
