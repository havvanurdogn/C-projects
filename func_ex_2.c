#include<stdio.h>
void carre(int n , int *res)
{
	*res=n*n;
	
}
int main()
{
	int x,r;
	printf("Please enter an integer:\n");
	scanf("%d",&x);
	carre(x,&r);
	printf("%d",r);
	
	
	return 0;
}
