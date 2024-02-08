#include<stdio.h>
int main()
{
	int x;
	printf("please enter an integer:");
	scanf("%d",&x);
	
	while(x>0)
	{
		printf("%d\t",x);
		x--;
	}
	
	
	
	
	return 0;
}
