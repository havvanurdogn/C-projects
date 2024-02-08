#include<stdio.h>
void res(int a , int b, int *r)
{
	int i;
	*r=1;
	for(i=0;i<b;i++)
	{
		*r=*r*a;
	}
}
int main()
{
	int x=4;
	int y=5,re;
	res(x,y,&re);
	printf("4 to 5 is %d",re);
	return 0;
}
