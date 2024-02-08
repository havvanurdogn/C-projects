#include<stdio.h>
void place(int a,int b)
{
	int r;
	r=a;
	a=b;
	b=r;
	printf("x=%d and y=%d\n",a,b);
}
int main()
{
	int x,y;
	printf("Please enter two integers:\n");
	scanf("%d %d",&x,&y);
	printf("After the placement:\n");
	place(x,y);
	return 0;
}
