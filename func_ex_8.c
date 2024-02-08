#include<stdio.h>
int facto(n)
{
	int i,r=1;
	for(i=1;i<=n;i++)
	{
		r*=i;
	}
	return r;
}
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d! = %d\n",i,facto(i));
	}
	return 0;
}
