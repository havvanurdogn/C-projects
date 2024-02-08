#include<stdio.h>
int main()
{
	int x,i;
	printf("Please enter a limit value:\n");
	scanf("%d",&x);
	
	while(i<=x)
	{
		if(i%17==0)
		printf("%d\n",i);
		i++;
	}
	
	
	
	
	
	
	return 0;
}
