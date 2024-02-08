#include<stdio.h>
void list(int num)
{
	if(num==0)
	{
		printf("%4d",num);
	}
	else
	{
		printf("%4d",num);
		list(num-1);
	}
}
int main()
{
	int n;
	printf("Please enter a integer:\n");
	scanf("%d",&n);
	list(n);
	return 0;
}
