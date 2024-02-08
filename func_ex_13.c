#include<stdio.h>
void list(int num)
{
	int i=0;
	while(i<=num)
	{
		if(i%2==1) printf("%4d",i);
		i++;
	}
	
}


int main()
{
	int x;
	printf("Please enter a number:\n");
	scanf("%d",&x);
	list(x);
	return 0;
}
