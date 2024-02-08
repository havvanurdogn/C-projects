#include<stdio.h>
int odev(int x)
{
	if(x%2==0) return 0;
	else return 1;
}

int main()
{
	int num,r;
	printf("Please enter a number:\n");
	scanf("%d",&num);
	r=odev(num);
	if(r==0) printf("%d is even.\n",num);
	else printf("%d is odd.\n",num);
	return 0;
}
