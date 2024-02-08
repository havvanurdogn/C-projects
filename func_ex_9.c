#include<stdio.h>
void entrint()
{
	int x;
	while(1)
	{
		printf("Please enter an integer:\n");
		scanf("%d",&x);
		if(x<0) break;
	}
}


int main()
{
	entrint();
	
	return 0;
}
