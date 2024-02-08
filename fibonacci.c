#include<stdio.h>
int facto(int*n)
{
	int i,r=1;
	for(i=*n;i>1;i--)
	{
		r*=(*n);
		(*n)--;
	}
	return r;
}

int main()
{
	int n,org;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	org=n;
	printf("%d!=%d",org,facto(&n));
	
	return 0;
}
