#include<stdio.h>
int main()
{
	int x,i,sum=0;
	printf("Please enter an integer:\n");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		if(i!=x) printf("%d + ",i);
		else printf("%d = ",i);
		sum+=i;
	}
	
	printf("%d",sum);
	
	return 0;
}
