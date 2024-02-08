#include<stdio.h>
int main()
{
	
	int i,n;
	float x,r;
	char c;
	do
	{
		printf("Please enter a integer:\n");
		scanf("%d",&n);
		printf("Please enter a reel number:\n");
		scanf("%f",&x);
		printf("Do you want to do again?\n");
		scanf("%c",&c);
			for(i=1;i<=n;i++)
			{
				r+=(2*i-1)/pow(x,2*i);
			}
		printf("%.2f\n",r);
	
    }
	while(c=='e'|| c=='E');
	printf("Good bye:::\n");
	
	
	return 0;
}
