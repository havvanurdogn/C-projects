#include<stdio.h>
int over(int a, int b)
{
	int i,r=1;
	for(i=0;i<b;i++)
	{
		r*=a;
	}
	return r;
}
int main()
{
	int x,y;
	printf("Please enter two integers:\n");
	scanf("%d %d",&x,&y);
	printf("%d to %d is %d",x,y,over(x,y));
	
	
	return 0;
	
}
